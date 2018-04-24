#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *serverName = argv[1];
    struct sockaddr_in server;
    char *msg = "GET";
    char buffer[1000];
    int mySocket;
    struct hostent *serverIp;

    serverIp = gethostbyname(serverName);

    memcpy(&server.sin_addr, serverIp->h_addr_list[0],serverIp->h_length);

    server.sin_port = htons(443);
    server.sin_family = AF_INET;

    mySocket = socket(AF_INET,SOCK_STREAM,0);
    if(connect(mySocket,(struct sockaddr *)&server,sizeof(server))==0)
    {
        printf("CONNECTED\n");
        write(mySocket,msg,strlen(msg) * sizeof(char));
        read(mySocket,buffer,sizeof(buffer));
        printf("DAta: %s\n", buffer);
    }
    else
    {
        printf("error while connected\n");
        
    }

    printf("The ip addres is: %s\n", serverIp->h_name);
}