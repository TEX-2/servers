//
// Created by a on 11.11.19.
//

#include "PhyMotionCommand.h"

PhyMotionCommand::PhyMotionCommand(TCP_Connection::TCPConnection *tcp_connection) {
    i_tcp_connection = tcp_connection;
}

std::string PhyMotionCommand::checksum(std::string message) {
    int len = message.length();

    std::stringstream stream;
    uint16_t ui_checksum = 0;
    for(int i=0;i<len;i++){
        ui_checksum ^= message.c_str()[i];
    }
    stream << std::hex << std::uppercase << std::setfill('0') << std::setw(2) << ui_checksum;

    return stream.str();
}

/* instruction = [addr,command] <- without "," */
void PhyMotionCommand::send(std::string instruction) {
    std::string message = instruction;
    message = message+std::string("\x3a");          // seporator ":"
    message = std::string("\x02")+message+checksum(message)+std::string("\x03");

    if(i_tcp_connection->getErrno()==0) i_tcp_connection->sendData(message);
}
