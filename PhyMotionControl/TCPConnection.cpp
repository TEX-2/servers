//
// Created by a on 05.11.19.
// GNU GPL (c) Kirill Pshenichnyi 2019 PNPI
//

#include "TCPConnection.h"

using namespace TCP_Connection;

TCPConnection::TCPConnection() {
    Open();

}

void TCPConnection::Open() {
    if(errorno!=0) return;
    
    sockfd = socket(AF_INET,SOCK_STREAM,0);
    if(sockfd < 0){
        errorno = ERR_SOCK;
        return;
    }

    server = gethostbyname(ip_addr.c_str());
    if(server == nullptr){
        errorno = ERR_SERV;
        return;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);
    bcopy(server->h_addr,&(serv_addr.sin_addr.s_addr),server->h_length);

    /* CONNECT */
    if(connect(sockfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr))<0){
        errorno = ERR_CONN;
        return;
    }
}

void TCPConnection::Close() {
    if(errorno!=0) return;
    shutdown(sockfd,SHUT_RDWR);
    close(sockfd);
}

int TCPConnection::sendData(std::string data) {
    int size = 0;
    size = send(sockfd,data.c_str(),data.length(),0);
    return size;
}