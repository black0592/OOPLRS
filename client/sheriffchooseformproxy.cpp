﻿#include "sheriffchooseformproxy.h"

void SheriffChooseFormProxy::connectSignal(){
    QObject::connect(this,SIGNAL(sendMessage(QString,QString,QString,QString,QString)),player,SLOT(receiveMessage(QString,QString,QString,QString,QString)));
    QObject::connect(player,SIGNAL(sendMessage(QString,QString,QString,QString,QString)),this,SLOT(receiveMessage(QString,QString,QString,QString,QString)));
    QObject::connect(item,SIGNAL(sheriffChoose(int)),this,SLOT(sheriffChoose(int)));
}

void SheriffChooseFormProxy::receiveMessage(QString str1, QString str2, QString str3, QString str4, QString str5){
    if(str1=="chooseSheriff"){
        this->item->setProperty("visible",QVariant(true));
    }
}

void SheriffChooseFormProxy::sheriffChoose(int i){
    if(i==1) {
        sendMessage("toServer","yes");
        sendMessage("isSheriffCandidate");
    }
    else if(i==2) sendMessage("toServer","no");
}
