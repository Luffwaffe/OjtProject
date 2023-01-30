#include "communicationmodule.h"

communicationModule::communicationModule()
{

}

communicationModule::communicationModule(QString name){
    this->moduleName =  name;
}

void communicationModule::onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data){

    if(targetModule == moduleName){
        switch (requestType) {
        case 0:{
            qDebug()<<moduleName+" receive request from: "<<sourceModule<<", request type:"<<requestType<<", data: "<<data;
            break;
        }
        case 1:{
            qDebug()<<moduleName+" receive request from: "<< sourceModule<<", request type:"<<requestType<<", data: "<<data;
            break;
        }
        default: break;

        }
    }
    else if(targetModule == "all"){
        qDebug()<<moduleName+" receive request from: "<<sourceModule<<", request type:"<<requestType<<", data: "<<data;
    }
}

void communicationModule::onResponseReceive(QString sourceModule, QString targetModule, int requestType, int data){

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
