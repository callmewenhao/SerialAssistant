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

	// �ѵ�ǰ���õ�com���ҵ�������serialPortNames
	QStringList serialPortNames;
	foreach(const QSerialPortInfo & info, QSerialPortInfo::availablePorts()) {
		serialPortNames << info.portName();
	}
	ui.serialCom->addItems(serialPortNames);

	// ����򿪰���ʱ��ʼ������
	connect(
		ui.openSerial, &QPushButton::clicked, this, [=]() {
			on_openButton_clicked();
		}
	);

	// ���ڶ�
	connect(
		serialPort, &QIODevice::readyRead, this, [=]() {
			serialPortReadReady();
		}
	);

	// ���ڷ�
	connect(
		ui.send, &QPushButton::clicked, this, [=]() {
			serialPortSendMessage();
		}
	);

	// ��ս�����
	connect(
		ui.cleanReceive, &QPushButton::clicked, this, [=]() {
			cleanReceArea();
		}
	);

	// ��շ�����
	connect(
		ui.cleanSend, &QPushButton::clicked, this, [=]() {
			cleanSendArea();
		}
	);
}

void SerialAssistant::on_openButton_clicked()
{
	if (serialOpenFlag == 0) {
		QSerialPort::BaudRate baudRate{ QSerialPort::Baud115200 }; // Ĭ��ֵ
		QSerialPort::DataBits dataBit{ QSerialPort::Data8 };
		QSerialPort::StopBits stopBit{ QSerialPort::OneStop };
		QSerialPort::Parity checkBit{ QSerialPort::NoParity };

		// �����ʳ�ʼ��
		if (ui.baudRate->currentText() == "115200") {
			baudRate = QSerialPort::Baud115200;
		}
		else if (ui.baudRate->currentText() == "9600") {
			baudRate = QSerialPort::Baud9600;
		}
		else if (ui.baudRate->currentText() == "4800") {
			baudRate = QSerialPort::Baud4800;
		}

		// ����λ
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

		// ֹͣλ
		if (ui.stopBit->currentText() == "1") {
			stopBit = QSerialPort::OneStop;
		}
		else if (ui.stopBit->currentText() == "1.5") {
			stopBit = QSerialPort::OneAndHalfStop;
		}
		else if (ui.stopBit->currentText() == "2") {
			stopBit = QSerialPort::TwoStop;
		}

		// У��λ
		if (ui.checkBit->currentText() == "none") {
			checkBit = QSerialPort::NoParity;
		}

		// ����
		serialPort->setPortName(ui.serialCom->currentText());
		serialPort->setBaudRate(baudRate);
		serialPort->setDataBits(dataBit);
		serialPort->setStopBits(stopBit);
		serialPort->setParity(checkBit);

		// ��ʾ
		if (serialPort->open(QIODevice::ReadWrite) == true) {
			QMessageBox::information(this, "Tips", "Open successfully");
		}
		else {
			QMessageBox::critical(this, "Tips", "Open failed!");
		}

		// �ı��־λ
		serialOpenFlag = 1;
		ui.openSerial->setText("Close Serial");
	}
	else if (serialOpenFlag == 1) {
		serialPort->close();
		// �ı��־λ
		serialOpenFlag = 0;
		ui.openSerial->setText("Open Serial");
		QMessageBox::information(this, "Tips", "Close successfully!");
		// serialPortReadReady();
	}
}

void SerialAssistant::serialPortReadReady()
{
	// ��������
	QString buf;
	buf = static_cast<QString>(serialPort->readAll());
	ui.receArea->append(buf);
}

void SerialAssistant::serialPortSendMessage()
{
	// ����
	serialPort->write(ui.inputArea->toPlainText().toLocal8Bit().data());
}

void SerialAssistant::cleanSendArea()
{
	// ���
	ui.inputArea->clear();
}

void SerialAssistant::cleanReceArea()
{
	// ���
	ui.receArea->clear();
}



