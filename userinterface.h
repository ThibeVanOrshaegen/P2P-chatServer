#ifndef USERINTERFACE_H
#define USERINTERFACE_H
class TcpClient;

class Userinterface
{
public:
    Userinterface(TcpClient * client);
private:
    TcpClient * Client;
};

#endif // USERINTERFACE_H
