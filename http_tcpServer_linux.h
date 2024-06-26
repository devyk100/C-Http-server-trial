#ifndef INCLUDED_HTTP_TCPSERVER_LINUX
#define INCLUDED_HTTP_TCPSERVER_LINUX

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string>

namespace http{
    class TcpServer{
        public: 
        TcpServer(std::string ip_address, int port);
        ~TcpServer();
        private:
        std::string m_ip_address;
        int m_port;
        long m_incomingMessage;
        struct sockaddr_in m_socketAddress;
        unsigned int m_socketAddress_len;
        std::string m_serverMessage;
        int m_socket;
        int m_new_socket;
        int startServer();
        void closeServer();
        
    };
} // namespace http

#endif