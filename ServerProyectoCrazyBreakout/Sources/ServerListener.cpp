//
// Created by dansecan on 3/10/21.
//
#include <iostream>
#include <sys/socket.h>
#include <fcntl.h>

#include "../Header/ServerListener.h"
using namespace std;
bool ServerListener::start(){
    serverSocket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(serverSocket<=0){
        cout<<"ERROR:Could not create socket"<<endl;
        exit(EXIT_FAILURE);
        return false;
    }
    else{
        cout<<"Socket opened succesfully"<<endl;
    }
    socketDetails.sin_family=AF_INET;
    socketDetails.sin_addr.s_addr=INADDR_ANY;
    socketDetails.sin_port= htons(serverSocketPort);
    memset(&(socketDetails.sin_zero),0,8);
    //binding the socket
    if(bind(serverSocket,(struct sockaddr*) &socketDetails, sizeof(sockaddr))<=0){
        cout<<"ERROR: socket didnt bind"<<endl;
        exit(EXIT_FAILURE);
        return false;
    } else{
        cout<< "SUCCESFUL BINDING"<<endl;
        return true;
    }

}