
#include "tcpclient.h"
#include <QCoreApplication>
#include <QObject>
#include <QTcpSocket>
#include <qtcpserver.h>
#include <QAbstractSocket>
#include <QDebug>
#include <QInputDialog>
#include <QApplication>
#include <string>
#include <QtWidgets>
#include "CreateJson.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TcpClient client;
    QString name = "TEST";
    QString output;
    output = createJSON(name, "192.168.0.1", 24042, "message" );
    std::cout << output.toStdString();
    if(argc >= 2){
        client.setNickName(name);
    }
    if (argc >= 3){
        client.firstConnect(argv[1], atoi(argv[2]));
    }
    return a.exec();
}
