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

void PhyMotionMotorDevice::setSpeed(double speed) {
    Tango::DeviceData argins;
    Tango::DevDouble arg = speed;
    argins << arg;
    device_proxy_phy_motion->command_inout("setSpeed",argins);
}

void PhyMotionMotorDevice::setAccel(double accel) {
    Tango::DeviceData argins;
    Tango::DevDouble arg = accel;
    argins << arg;
    device_proxy_phy_motion->command_inout("setAccel",argins);
}

void PhyMotionMotorDevice::setDecel(double decel) {
    Tango::DeviceData argins;
    Tango::DevDouble arg = decel;
    argins << arg;
    device_proxy_phy_motion->command_inout("setDecel",argins);
}


double PhyMotionMotorDevice::readPosition() {
    double retval;
    device_proxy_phy_motion->read_attribute("position") >> retval;
    return retval;
}

double PhyMotionMotorDevice::readSpeed() {
    double retval;
    device_proxy_phy_motion->read_attribute("speed") >> retval;
    return retval;
}

double PhyMotionMotorDevice::readRamp() {
    double retval;
    device_proxy_phy_motion->read_attribute("ramp") >> retval;
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