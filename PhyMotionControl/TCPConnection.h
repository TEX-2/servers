//
// Created by a on 05.11.19.
//

#ifndef PHYMOTIONCONTROL_TCPCONNECTION_H
#define PHYMOTIONCONTROL_TCPCONNECTION_H

#include <iostream>
#include <string>

class TCPConnection {
private:
    int errorno = 0;


    std::string ip_addr;
    short int port;

public:
    TCPConnection();
    void open();
    void close();
    //void sendData()
    int getErrno(void);
};


#endif //PHYMOTIONCONTROL_TCPCONNECTION_H
