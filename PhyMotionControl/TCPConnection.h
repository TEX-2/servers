//
// Created by a on 05.11.19.
//

#ifndef PHYMOTIONCONTROL_TCPCONNECTION_H
#define PHYMOTIONCONTROL_TCPCONNECTION_H

#include <iostream>
#include <string>
#include <strings.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

namespace TCP_Connection {
    /* Errors */

    static const int8_t  ERR_OK = 0;
    static const int8_t  ERR_SOCK = -1;
    static const int8_t  ERR_SERV = -2;
    static const int8_t  ERR_CONN = -3;
    static const int8_t  ERR_SEND = -4;
    static const int8_t  ERR_RECV = -5;


    static const int BUFFER_SIZE=16;             //in bytes


    class TCPConnection {
    private:
        int errorno = ERR_OK;


        std::string ip_addr;
        short int tcp_port;

        struct sockaddr_in serv_addr;
        struct hostent *server;

        int sockfd;

    public:
        // constructor
        TCPConnection(std::string addr,int port);

        // open tcp connection
        void Open(void);
        // close tcp connection
        void Close(void);

        int sendData(std::string data);
        // get Socket file descriptor
        std::string recvData(void);
        int getSocketFd(void){return sockfd;}
        // get Error number
        int getErrno(void) {return errorno;}
    };
}


#endif //PHYMOTIONCONTROL_TCPCONNECTION_H
