#include "http_tcpServer_linux.h"

int main(){
    using namespace http;
    TcpServer server = TcpServer("0.0.0.0", 8080);
    return 0;
}

// struct sockaddr_in{
//     short sin_family;
//     unsigned short sin_port;
//     struct in_addr sin_addr;
//     char sin_zero[8];  
// };

// struct in_addr{
//     unsigned long s_addr;
// };