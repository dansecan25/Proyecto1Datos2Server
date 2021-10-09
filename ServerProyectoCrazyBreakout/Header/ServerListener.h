//
// Created by dansecan on 3/10/21.
//

#ifndef SERVERPROYECTOCRAZYBREAKOUT_SERVERLISTENER_H
#define SERVERPROYECTOCRAZYBREAKOUT_SERVERLISTENER_H
#include <netdb.h> //librerias para red
#include <string.h>
#include <string>

class ServerListener{
private:
    int serverSocket;
    struct sockaddr_in socketDetails;
    int serverSocketPort=4050;
    
public:
    bool start();
};



#endif //SERVERPROYECTOCRAZYBREAKOUT_SERVERLISTENER_H
