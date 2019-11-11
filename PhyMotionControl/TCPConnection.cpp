//
// Created by a on 05.11.19.
// GNU GPL (c) Kirill Pshenichnyi 2019 PNPI
//

#include "TCPConnection.h"

using namespace TCP_Connection;

TCPConnection::TCPConnection(std::string addr,int port) {
    ip_addr = addr;
    tcp_port = port;

    //Open();   reserved
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
    serv_addr.sin_port = htons(tcp_port);
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
    if(size<0){
        errorno = ERR_SEND;
    }
    return size;
}

std::string TCPConnection::recvData() {
    std::string out_data;
    char buffer[32];
    while(recv(sockfd,buffer,32,0)!=0){
        out_data.append(buffer);
    }
    return out_data;
}