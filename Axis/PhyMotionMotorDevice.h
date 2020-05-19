//
// Created by a on 28.11.19.
//

#ifndef AXIS_PHYMOTIONMOTORDEVICE_H
#define AXIS_PHYMOTIONMOTORDEVICE_H

#include <iostream>
#include <tango.h>

class PhyMotionMotorDevice {

private:
    Tango::DeviceProxy *device_proxy_phy_motion = nullptr;
public:
    PhyMotionMotorDevice(std::string path);
    ~PhyMotionMotorDevice(){delete device_proxy_phy_motion;}

public:
    double readPosition(void);
    double readAbsolutePosition(void);          // for encoder
    double readRamp(void);
    double readSpeed(void);
    int readAxisState(void);
    void writePosition(double pos);
    void setSpeed(double speed);
    void setAccel(double accel);
    void setDecel(double decel);
    void activation(bool val);
    Tango::DevState getDevState(){device_proxy_phy_motion->state();}
    Tango::DeviceProxy *getDeviceProxy(void){return device_proxy_phy_motion;}
};


#endif //AXIS_PHYMOTIONMOTORDEVICE_H
