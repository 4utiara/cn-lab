//socket,connect,send ,recv,close

#include<stdio.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<net/inet.h>


void main(){
int client;
char buffer[1024];

struct sockddr_in servAddr;

socklen_t addr_size;

client =socket(AF_INET,SOCK_STREAM,0);

servAddr.sin_family=AF_INET;
servAddr.port=htons(6265);
servAddr.sin_addr.s_addr=inet_addr("127.0.0.1");


connect(client,(struct sockaddr*)&Addr,sizeof serverAddr);
printf("sending data to the server\n");

strcpy(buffer,"hi ,this is client");
send(client,buffer,19,0);
recv(client,buffer,1024,0);
printf("data recieved%s\n",buffer);

close(client);



}
