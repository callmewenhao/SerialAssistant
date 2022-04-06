/********************************************************************************
** Form generated from reading UI file 'SerialAssistant.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALASSISTANT_H
#define UI_SERIALASSISTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialAssistantClass
{
public:
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget_7;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *serialCom;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baudRate;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *dataBit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *checkBit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *stopBit;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_4;
    QPushButton *openSerial;
    QPushButton *cleanReceive;
    QPushButton *cleanSend;
    QPushButton *send;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *receArea;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_7;
    QPlainTextEdit *inputArea;

    void setupUi(QWidget *SerialAssistantClass)
    {
        if (SerialAssistantClass->objectName().isEmpty())
            SerialAssistantClass->setObjectName(QString::fromUtf8("SerialAssistantClass"));
        SerialAssistantClass->resize(792, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        SerialAssistantClass->setFont(font);
        horizontalLayout_8 = new QHBoxLayout(SerialAssistantClass);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        groupBox = new QGroupBox(SerialAssistantClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(10);
        groupBox->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_7 = new QWidget(groupBox);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout = new QGridLayout(widget_7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        serialCom = new QComboBox(widget_2);
        serialCom->setObjectName(QString::fromUtf8("serialCom"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        serialCom->setFont(font2);

        horizontalLayout->addWidget(serialCom);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        widget = new QWidget(widget_7);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baudRate = new QComboBox(widget);
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->addItem(QString());
        baudRate->setObjectName(QString::fromUtf8("baudRate"));
        baudRate->setFont(font2);

        horizontalLayout_2->addWidget(baudRate);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        dataBit = new QComboBox(widget_3);
        dataBit->addItem(QString());
        dataBit->addItem(QString());
        dataBit->addItem(QString());
        dataBit->addItem(QString());
        dataBit->setObjectName(QString::fromUtf8("dataBit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dataBit->sizePolicy().hasHeightForWidth());
        dataBit->setSizePolicy(sizePolicy);
        dataBit->setFont(font2);

        horizontalLayout_3->addWidget(dataBit);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        widget_4 = new QWidget(widget_7);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        checkBit = new QComboBox(widget_4);
        checkBit->addItem(QString());
        checkBit->setObjectName(QString::fromUtf8("checkBit"));
        checkBit->setFont(font2);

        horizontalLayout_4->addWidget(checkBit);


        gridLayout->addWidget(widget_4, 3, 0, 1, 1);

        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        stopBit = new QComboBox(widget_5);
        stopBit->addItem(QString());
        stopBit->addItem(QString());
        stopBit->addItem(QString());
        stopBit->setObjectName(QString::fromUtf8("stopBit"));
        stopBit->setFont(font2);

        horizontalLayout_5->addWidget(stopBit);


        gridLayout->addWidget(widget_5, 4, 0, 1, 1);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(groupBox);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_4 = new QVBoxLayout(widget_8);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        openSerial = new QPushButton(widget_8);
        openSerial->setObjectName(QString::fromUtf8("openSerial"));
        openSerial->setMinimumSize(QSize(170, 40));
        openSerial->setMaximumSize(QSize(170, 40));
        openSerial->setFont(font2);
        openSerial->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"border-radius:10px;\n"
"color:rgb(0,0,0);"));

        verticalLayout_4->addWidget(openSerial);

        cleanReceive = new QPushButton(widget_8);
        cleanReceive->setObjectName(QString::fromUtf8("cleanReceive"));
        cleanReceive->setMinimumSize(QSize(170, 40));
        cleanReceive->setMaximumSize(QSize(170, 40));
        cleanReceive->setFont(font2);
        cleanReceive->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 0);\n"
"border-radius:10px;\n"
"color:rgb(0,0,0);"));

        verticalLayout_4->addWidget(cleanReceive);

        cleanSend = new QPushButton(widget_8);
        cleanSend->setObjectName(QString::fromUtf8("cleanSend"));
        cleanSend->setMinimumSize(QSize(170, 40));
        cleanSend->setMaximumSize(QSize(170, 40));
        cleanSend->setFont(font2);
        cleanSend->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 170, 0);\n"
"border-radius:10px;\n"
"color:rgb(0,0,0);"));

        verticalLayout_4->addWidget(cleanSend);

        send = new QPushButton(widget_8);
        send->setObjectName(QString::fromUtf8("send"));
        send->setMinimumSize(QSize(170, 40));
        send->setMaximumSize(QSize(170, 40));
        send->setFont(font2);
        send->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"border-radius:10px;\n"
"color:rgb(0,0,0);"));

        verticalLayout_4->addWidget(send);


        verticalLayout->addWidget(widget_8);


        horizontalLayout_8->addWidget(groupBox);

        widget_6 = new QWidget(SerialAssistantClass);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(widget_6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(widget_6);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font1);
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        receArea = new QTextBrowser(groupBox_2);
        receArea->setObjectName(QString::fromUtf8("receArea"));
        receArea->setFont(font2);
        receArea->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(receArea);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget_6);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        inputArea = new QPlainTextEdit(groupBox_3);
        inputArea->setObjectName(QString::fromUtf8("inputArea"));
        inputArea->setFont(font);
        inputArea->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(inputArea);


        verticalLayout_2->addWidget(groupBox_3);


        horizontalLayout_8->addWidget(widget_6);


        retranslateUi(SerialAssistantClass);

        baudRate->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SerialAssistantClass);
    } // setupUi

    void retranslateUi(QWidget *SerialAssistantClass)
    {
        SerialAssistantClass->setWindowTitle(QApplication::translate("SerialAssistantClass", "SerialAssistant", nullptr));
        groupBox->setTitle(QApplication::translate("SerialAssistantClass", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label->setText(QApplication::translate("SerialAssistantClass", "\347\253\257\345\217\243\357\274\232", nullptr));
        label_2->setText(QApplication::translate("SerialAssistantClass", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        baudRate->setItemText(0, QApplication::translate("SerialAssistantClass", "4800", nullptr));
        baudRate->setItemText(1, QApplication::translate("SerialAssistantClass", "9600", nullptr));
        baudRate->setItemText(2, QApplication::translate("SerialAssistantClass", "115200", nullptr));

        label_3->setText(QApplication::translate("SerialAssistantClass", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        dataBit->setItemText(0, QApplication::translate("SerialAssistantClass", "8", nullptr));
        dataBit->setItemText(1, QApplication::translate("SerialAssistantClass", "7", nullptr));
        dataBit->setItemText(2, QApplication::translate("SerialAssistantClass", "6", nullptr));
        dataBit->setItemText(3, QApplication::translate("SerialAssistantClass", "5", nullptr));

        label_4->setText(QApplication::translate("SerialAssistantClass", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        checkBit->setItemText(0, QApplication::translate("SerialAssistantClass", "none", nullptr));

        label_5->setText(QApplication::translate("SerialAssistantClass", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        stopBit->setItemText(0, QApplication::translate("SerialAssistantClass", "1", nullptr));
        stopBit->setItemText(1, QApplication::translate("SerialAssistantClass", "1.5", nullptr));
        stopBit->setItemText(2, QApplication::translate("SerialAssistantClass", "2", nullptr));

        openSerial->setText(QApplication::translate("SerialAssistantClass", "Open Serial", nullptr));
        cleanReceive->setText(QApplication::translate("SerialAssistantClass", "Clean Rece Area", nullptr));
        cleanSend->setText(QApplication::translate("SerialAssistantClass", "Clean Send Area", nullptr));
        send->setText(QApplication::translate("SerialAssistantClass", "Send Message", nullptr));
        groupBox_2->setTitle(QApplication::translate("SerialAssistantClass", "\346\216\245\345\217\227\345\214\272\357\274\232", nullptr));
        groupBox_3->setTitle(QApplication::translate("SerialAssistantClass", "\345\217\221\351\200\201\345\214\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialAssistantClass: public Ui_SerialAssistantClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALASSISTANT_H
