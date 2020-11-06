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

    void setDevicePath(std::string path_cotrol_device);
    
    std::string sendCMD(std::string arg);

    int pingControl(void){
	    return proxy_control_device->ping();
    }

    void setParameter(std::string str_addr_axis, std::string param, std::string value, bool force_if);
    void setParameter(std::string str_addr_axis, std::string param, std::string value){setParameter(str_addr_axis, param, value, false);}

private:
    Tango::DeviceProxy *proxy_control_device;

};


#endif //PHYMOTIONCONTROL_PHYMOTIONCONTROLCMD_H
