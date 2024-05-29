#include <http_tcpServer_linux.h>

#include <iostream>
#include <sstream>
#include <unistd.h>

namespace {
    void log(const std::string &message){
        std::cout << message << std::endl;
    }

    void exitWithError(const std::string &errorMessage){
        log("ERROR: " + errorMessage);
        exit(1);
    }
}

namespace http{
    TcpServer::TcpServer(){
        startServer();
    }

    TcpServer::~TcpServer(){
        closeServer();
    }

    int TcpServer::startServer(){
        m_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_IP);
        if(m_socket < 0){
            exitWithError("Cannot create socket");
            return 1;
        }
        return 0;
    }

    void TcpServer::closeServer(){
        close(m_socket);
        close(m_new_socket);
        exit(0);
    }


} // namespace http
