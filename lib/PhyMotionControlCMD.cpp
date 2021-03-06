//
// Created by a on 18.11.19.
//

#include "PhyMotionControlCMD.h"

PhyMotionControlCMD::PhyMotionControlCMD(std::string path_cotrol_device){
	setDevicePath(path_cotrol_device);
}

void PhyMotionControlCMD::setDevicePath(std::string path_cotrol_device){
	proxy_control_device = new Tango::DeviceProxy(path_cotrol_device);
}

PhyMotionControlCMD::~PhyMotionControlCMD() {
    delete proxy_control_device;
}

std::string PhyMotionControlCMD::sendCMD(std::string str_arg){
    Tango::DeviceData argins;
    Tango::DevString arg;

    std::string retval;
    std::string raw_data;

    arg = new char [str_arg.length()];
    strcpy(arg,str_arg.c_str());
    argins << arg;

    //std::cout << "DEBUG: sendCMD("+str_arg+");\n";

    Tango::DeviceData reply = proxy_control_device->command_inout("sendCMD",argins);

    reply >> raw_data;
    if(raw_data.length()<3) return std::string("");
    if(raw_data.c_str()[0]!='\x02') return std::string("");
    if(raw_data.c_str()[1]!='\x06') return std::string("");
    for(int i=2;i<raw_data.length();i++){
        if(raw_data.c_str()[i]==':') break;
        retval += raw_data.c_str()[i];
    }

    delete [] arg;
    return retval;
}

void PhyMotionControlCMD::setParameter(std::string str_addr_axis,std::string param,std::string value, bool force_if){
    std::string response;
    if(!force_if){
        response = sendCMD(str_addr_axis+"P"+param+"R");            // @1.1P01R     for example
        if(response.compare(value)==0) return;
    }
    sendCMD(str_addr_axis+"P"+param+"S"+value);                     // @1.1P01S1
    return;
}
