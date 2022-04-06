#include "SerialAssistant.h"
#include <QSerialPortInfo>
#include <qiodevice.h>
#include <qmessagebox.h>
#include <qstring.h>
#include <QTextBrowser>

SerialAssistant::SerialAssistant(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(800, 600);

	//
	serialPort = new QSerialPort(this);

	// 把当前可用的com口找到并放入serialPortNames
	QStringList serialPortNames;
	foreach(const QSerialPortInfo & info, QSerialPortInfo::availablePorts()) {
		serialPortNames << info.portName();
	}
	ui.serialCom->addItems(serialPortNames);

	// 点击打开按键时初始化串口
	connect(
		ui.openSerial, &QPushButton::clicked, this, [=]() {
			on_openButton_clicked();
		}
	);

	// 串口读
	connect(
		serialPort, &QIODevice::readyRead, this, [=]() {
			serialPortReadReady();
		}
	);

	// 串口发
	connect(
		ui.send, &QPushButton::clicked, this, [=]() {
			serialPortSendMessage();
		}
	);

	// 清空接受区
	connect(
		ui.cleanReceive, &QPushButton::clicked, this, [=]() {
			cleanReceArea();
		}
	);

	// 清空发送区
	connect(
		ui.cleanSend, &QPushButton::clicked, this, [=]() {
			cleanSendArea();
		}
	);
}

void SerialAssistant::on_openButton_clicked()
{
	if (serialOpenFlag == 0) {
		QSerialPort::BaudRate baudRate{ QSerialPort::Baud115200 }; // 默认值
		QSerialPort::DataBits dataBit{ QSerialPort::Data8 };
		QSerialPort::StopBits stopBit{ QSerialPort::OneStop };
		QSerialPort::Parity checkBit{ QSerialPort::NoParity };

		// 波特率初始化
		if (ui.baudRate->currentText() == "115200") {
			baudRate = QSerialPort::Baud115200;
		}
		else if (ui.baudRate->currentText() == "9600") {
			baudRate = QSerialPort::Baud9600;
		}
		else if (ui.baudRate->currentText() == "4800") {
			baudRate = QSerialPort::Baud4800;
		}

		// 数据位
		if (ui.dataBit->currentText() == "8") {
			dataBit = QSerialPort::Data8;
		}
		else if (ui.dataBit->currentText() == "7") {
			dataBit = QSerialPort::Data7;
		}
		else if (ui.dataBit->currentText() == "6") {
			dataBit = QSerialPort::Data6;
		}
		else if (ui.dataBit->currentText() == "5") {
			dataBit = QSerialPort::Data5;
		}

		// 停止位
		if (ui.stopBit->currentText() == "1") {
			stopBit = QSerialPort::OneStop;
		}
		else if (ui.stopBit->currentText() == "1.5") {
			stopBit = QSerialPort::OneAndHalfStop;
		}
		else if (ui.stopBit->currentText() == "2") {
			stopBit = QSerialPort::TwoStop;
		}

		// 校验位
		if (ui.checkBit->currentText() == "none") {
			checkBit = QSerialPort::NoParity;
		}

		// 设置
		serialPort->setPortName(ui.serialCom->currentText());
		serialPort->setBaudRate(baudRate);
		serialPort->setDataBits(dataBit);
		serialPort->setStopBits(stopBit);
		serialPort->setParity(checkBit);

		// 提示
		if (serialPort->open(QIODevice::ReadWrite) == true) {
			QMessageBox::information(this, "Tips", "Open successfully");
		}
		else {
			QMessageBox::critical(this, "Tips", "Open failed!");
		}

		// 改变标志位
		serialOpenFlag = 1;
		ui.openSerial->setText("Close Serial");
	}
	else if (serialOpenFlag == 1) {
		serialPort->close();
		// 改变标志位
		serialOpenFlag = 0;
		ui.openSerial->setText("Open Serial");
		QMessageBox::information(this, "Tips", "Close successfully!");
		// serialPortReadReady();
	}
}

void SerialAssistant::serialPortReadReady()
{
	// 接受区域
	QString buf;
	buf = static_cast<QString>(serialPort->readAll());
	ui.receArea->append(buf);
}

void SerialAssistant::serialPortSendMessage()
{
	// 发送
	serialPort->write(ui.inputArea->toPlainText().toLocal8Bit().data());
}

void SerialAssistant::cleanSendArea()
{
	// 清空
	ui.inputArea->clear();
}

void SerialAssistant::cleanReceArea()
{
	// 清空
	ui.receArea->clear();
}



