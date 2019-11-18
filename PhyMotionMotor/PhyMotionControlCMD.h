//
// Created by a on 18.11.19.
//

#ifndef PHYMOTIONCONTROL_PHYMOTIONCONTROLCMD_H
#define PHYMOTIONCONTROL_PHYMOTIONCONTROLCMD_H

#include <tango.h>
#include <iostream>
#include <string>

class PhyMotionControlCMD {
public:
    PhyMotionControlCMD(std::string path_cotrol_device);
    ~PhyMotionControlCMD();
    std::string sendCMD(std::string arg);
private:

    Tango::DeviceProxy *proxy_control_device;
};


#endif //PHYMOTIONCONTROL_PHYMOTIONCONTROLCMD_H
