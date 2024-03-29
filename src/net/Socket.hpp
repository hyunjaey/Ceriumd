//Copyright (c) 2021 Heewon Cho

#ifndef _CERIUM_NET_SOCKET
#define _CERIUM_NET_SOCKET

#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <iostream>
#include <unistd.h>

class Socket {
    private:
        int SocketDesc;
        char Buff[256];
    public:
        Socket(int SocketDesc);
        ~Socket();
        int CloseSocket();
        int SendData(int data, size_t size);
        int SendData(char *data, size_t size);
        char *RecvData();
};

#endif