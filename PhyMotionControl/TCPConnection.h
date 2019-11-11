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
    enum{
        ERR_SOCK,
        ERR_SERV,
        ERR_CONN,
        ERR_SEND,
        ERR_RECV
    };


    class TCPConnection {
    private:
        int errorno = 0;


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
