﻿/*************************************************
 * 名称： thiefchooseformproxy.h
 * 作者： 赵欣昊
 * 时间： 20170616
 * 内容描述： ThiefChooseFormProxy类（UiProxy类的子类），负责接收由Player类传来的消息，控制UI中的ThiefChooseForm对象；接收UI中ThiefChooseForm传来的消息，传给Player类
 * 版权： 这是我们自行完成的程序，没有使用其他来源代码
 ************************************************/

#ifndef THIEFCHOOSEFORMPROXY_H
#define THIEFCHOOSEFORMPROXY_H


#include "uiproxy.h"

class ThiefChooseFormProxy : public UiProxy
{
    Q_OBJECT
public:
    using UiProxy::UiProxy;
    void connectSignal();

signals:

public slots:
    void receiveMessage(QString str1, QString str2 = "", QString str3 = "", QString str4 = "", QString str5 = "");
    void thiefChoose(int i);

private:
    QObject* image1;
    QObject* image2;
};

#endif // THIEFCHOOSEFORMPROXY_H
