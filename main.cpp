#include <QCoreApplication>
#include"databasemodule.h"
#include"communicationmodule.h"

int main(int argc, char *argv[])

{
    communicationModule comM("communicationModule");
    dataBaseModule dataM("dataBaseModule");

    comM.connect(&dataM);
    dataM.connect(&comM);

    comM.start();
    dataM.start();

    QCoreApplication a(argc, argv);

    return a.exec();
}
