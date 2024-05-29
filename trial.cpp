#include<iostream>
#include <arpa/inet.h>
int main(){
    unsigned long s = 10;
    unsigned long s2 = htonl(s);
    unsigned long s3 = ntohl(s2);
    std::cout << s << " " << s2 << " " <<s3 << std::endl;
    std::cout << inet_addr("256.256.256.256") << std::endl;
}