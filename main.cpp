#include <QCoreApplication>
#include"databasemodule.h"
#include"communicationmodule.h"

int main(int argc, char *argv[])

{
    dataBaseModule firstObject("firstModule");
    communicationModule secondObject("secondModule");

    firstObject.conectToSendRequest(&secondObject);

    firstObject.request("second",0,99);

    QCoreApplication a(argc, argv);

    return a.exec();
}
