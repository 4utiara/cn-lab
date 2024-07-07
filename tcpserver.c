//tcp sever side program
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

void main(){
    int server,newSock;
    char buffer[1024];
    struct sockaddr_in servAddr;
    struct sockaddr_storage store;//store any socket address of any type,ipv4 or ipv6 etc

    socklen_t addrSize;
    server=socket(AF_INET,SOCK_STREAM,0);
    
    servAddr.sin_family=AF_INET;
    servAddr.port=htons(6265);
    servAddr.sin_addr.s_addr=inet_addr("127.0.0.1");
    
    bind(server,(struct sockaddr )*&servAddr,sizeof(servAddr));

    if(listen(server,5)==0)//as i set message length to be 5
    print("listening\n");

else
    printf("error\n");

    
    newSock = accept(server,(struct sockaddr *)&store,&addrSize);

    recv(newSock,buffer,1024,0);

    printf("2.data recieved :%s",buffer);
    
    strcpy(buffer,"hi this is server side");
    printf("3.sending data to client");
    send(newSock,buffer,19,0);
    close(newSock);
    close(server);
    

}
