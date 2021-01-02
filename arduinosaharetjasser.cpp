#include "arduinosaharetjasser.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
arduinoSaharETJasser::arduinoSaharETJasser()
{
     serial=new QSerialPort();

}
int arduinoSaharETJasser::connnectArduino()
{
    foreach(const QSerialPortInfo& serial_port_info,QSerialPortInfo::availablePorts())
    {
        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier())
        {
            if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier() == arduino_uno_product_id)
            {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();

            }
        }
    }
    qDebug() << "arduino chambre port name" <<arduino_port_name ;

    if (arduino_is_available)
    {
        serial->setPortName(arduino_port_name);
        if(serial->open(QSerialPort::ReadWrite))
        {
            serial->open(QSerialPort::ReadOnly);
            serial->setBaudRate(QSerialPort::Baud9600);
            serial->setDataBits(QSerialPort::Data8);
            serial->setFlowControl(QSerialPort::NoFlowControl);
            serial->setParity(QSerialPort::NoParity);
            serial->setStopBits(QSerialPort::OneStop);


            return 0;
        }
        return 1;
    }
    return -1;
}
int arduinoSaharETJasser::closeArduino()
{
    if(serial->isOpen())
    {
        serial->close();
        return 0;
    }
    return 1;
}
QByteArray arduinoSaharETJasser::read_fromArduino()
{
    if(serial->isReadable())
    data=serial->readAll();
    return data;
}
void arduinoSaharETJasser::write_toArduino(QByteArray d)
{
    if(serial->isReadable())
        serial->write(d);
    else
        qDebug()<<"couldn't write to serial (chambre)!!!!!!";
}
