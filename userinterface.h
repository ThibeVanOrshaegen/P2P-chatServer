#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <QWidget>

QString createJSON(QString id, QString ip, quint16 port, QString message);

class TcpClient;

class Userinterface
{
public:
    Userinterface(TcpClient * client);
    ~Userinterface(){};
private:
    TcpClient * Client;
    QWidget window;
};

#endif // USERINTERFACE_H
