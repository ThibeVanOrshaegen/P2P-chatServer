#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <iostream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>

using namespace std;
using std::string;

namespace Peer2Peer {
    class message_handler
    {
    private:
        int clientID;
        int clientPort;
        string ipAdress;

    public:
        /**
         * FileReader default constructor.
         *
         * Default constructor for the FileReader class, utilizing the default behavior provided by "= default".
         */
        message_handler() = default;

        /**
         * FileReader destructor.
         *
         * Cleans up resources and performs necessary cleanup when a fileReader object is destroyed.
         */
        ~message_handler();

        /**
         * Reads a JSON file and returns its contents as a QJsonObject.
         *
         * This function takes a file path as input, opens and reads the specified JSON file,
         * and then returns its contents as a QJsonObject. It internally uses Qt's QJsonDocument
         * to parse the JSON data.
         */
        QJsonObject readJsonMessage(const string &message);

        /* Setter to store the ip into variable */
        void setIP(string IP);

        /* Getter to return the ip address */
        string getIP(void);

        /* Setter to store the id into variable */
        void setID(int ID);

        /* Getter to return the client id */
        int getID(void);

        /* Setter to store the port into variable */
        void setPort(int Port);

        /* Getter to return the client port */
        int getPort(void);
    };
}

#endif // FILE_HANDLER_H
