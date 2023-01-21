#ifndef COMMUNICATIONMODULE_H
#define COMMUNICATIONMODULE_H

#include "ibasemodule.h"
#include <iostream>
#include <string>

class communicationModule : public IBaseModule
{
public:
    communicationModule();
    communicationModule(QString name);;

    ~communicationModule(){};

    virtual void request(QString Module, int requestType, int data);;

signals:

public slots:
    virtual void onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data);;
};

#endif // COMMUNICATIONMODULE_H
