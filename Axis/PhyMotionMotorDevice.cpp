//
// Created by a on 28.11.19.
//

#include "PhyMotionMotorDevice.h"

PhyMotionMotorDevice::PhyMotionMotorDevice(std::string path){
    device_proxy_phy_motion = new Tango::DeviceProxy(path);
}

void PhyMotionMotorDevice::writePosition(double pos) {
    Tango::DeviceData argins;
    Tango::DevDouble arg = pos;
    argins << arg;
    device_proxy_phy_motion->command_inout("goTo",argins);
}

double PhyMotionMotorDevice::readPosition() {
    double retval;
    device_proxy_phy_motion->read_attribute("position") >> retval;
    return retval;
}

double PhyMotionMotorDevice::readAbsolutePosition() {
    double retval;
    device_proxy_phy_motion->read_attribute("absolute_counter") >> retval;
    return retval;
}

int PhyMotionMotorDevice::readAxisState() {
    int retval;

    device_proxy_phy_motion->read_attribute("axis_status") >> retval;
    return retval;
}

void PhyMotionMotorDevice::activation(bool val){
    Tango::DeviceAttribute a_activ("activate",val);
    device_proxy_phy_motion->write_attribute(a_activ);
}