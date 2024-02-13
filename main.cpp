#include <iostream>
#include "message_handler.h"

int main()
{
    // json structure
    string jsonString = R"({
        "id": 101,
        "ip": "192.168.1.100",
        "port": 8080
    })";

    // working with namespace
    Peer2Peer::message_handler *client_information = new Peer2Peer::message_handler();
    client_information->readJsonMessage(jsonString);

    // getters are ready to use for future work
    cout << "ID: " << client_information->getID() << "\n";
    cout << "IP: " << client_information->getIP() << "\n";
    cout << "Port: " << client_information->getPort() << "\n";

    return 0;
}
