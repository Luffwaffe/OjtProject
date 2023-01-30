#include "databasemodule.h"
#include <unistd.h>

dataBaseModule::dataBaseModule()
{

}

dataBaseModule::dataBaseModule(QString name){
    this->moduleName =  name;
}

dataBaseModule::~dataBaseModule(){}

void dataBaseModule::onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data){

    if(targetModule == moduleName){
        switch (requestType) {
        case 0:{
            qDebug()<<moduleName+" receive request from: "+sourceModule+", request type:"<<requestType<<", data: "<<data;
            break;
        }
        case 1:{
            qDebug()<<moduleName+" receive request from: "+sourceModule+", request type:"<<requestType<<", data: "<<data;
            break;
        }
        default: break;

        }
    }
    else if(targetModule == "all"){
        qDebug()<<moduleName+" receive receive from: "<<sourceModule<<", request type:"<<requestType<<", data: "<<data;
    }
}

void dataBaseModule::onResponseReceive(QString sourceModule, QString targetModule, int requestType, int data){
    if(targetModule == moduleName){
            switch (requestType) {
            case 0:{
                qDebug()<<moduleName+" receive response from: "<<sourceModule<<", request type:"<<requestType<<", data: "<<data;
                break;
            }
            case 1:{
                qDebug()<<moduleName+" receive response from: "<< sourceModule<<", request type:"<<requestType<<", data: "<<data;
                break;
            }
            default: break;

            }
        }
        else if(targetModule == "all"){
            qDebug()<<moduleName+" receive response from: "<<sourceModule<<", request type:"<<requestType<<", data: "<<data;
        }
}

