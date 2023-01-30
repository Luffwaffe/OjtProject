#ifndef COMMUNICATIONMODULE_H
#define COMMUNICATIONMODULE_H

#include "ibasemodule.h"
#include <iostream>
#include <string>

class communicationModule : public IBaseModule
{
public:
    communicationModule();;
    communicationModule(QString name);;
    ~communicationModule(){};;

signals:

public slots:
    virtual void onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data);;
    virtual void onResponseReceive(QString sourceModule, QString targetModule, int requestType, int data);
};

#endif // COMMUNICATIONMODULE_H
