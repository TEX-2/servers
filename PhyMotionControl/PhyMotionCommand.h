//
// Created by a on 11.11.19.
//

#ifndef PHYMOTIONCONTROL_PHYMOTIONCOMMAND_H
#define PHYMOTIONCONTROL_PHYMOTIONCOMMAND_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "TCPConnection.h"

class PhyMotionCommand {
private:
    TCP_Connection::TCPConnection *i_tcp_connection;

private:
    //message witjp
    std::string checksum(std::string message);
public:

    PhyMotionCommand(TCP_Connection::TCPConnection * tcp_connection);

    void send(std::string message);
};


#endif //PHYMOTIONCONTROL_PHYMOTIONCOMMAND_H
