#pragma once

#include <QtWidgets/QWidget>
#include "ui_SerialAssistant.h"
#include <QSerialPort>

class SerialAssistant : public QWidget
{
    Q_OBJECT

public:
    SerialAssistant(QWidget *parent = Q_NULLPTR);
    void on_openButton_clicked();
    void serialPortReadReady();
    void serialPortSendMessage();
    void cleanSendArea();
    void cleanReceArea();

private:
    Ui::SerialAssistantClass ui;
    QSerialPort* serialPort;
    int serialOpenFlag = 0;  // 0´ú±í¹Ø±Õ
};
