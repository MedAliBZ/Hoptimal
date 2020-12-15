#ifndef ARDUINOSAHARETJASSER_H
#define ARDUINOSAHARETJASSER_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class arduinoSaharETJasser
{
public:
    arduinoSaharETJasser();
    int connnectArduino();
    int closeArduino();
    void write_toArduino(QByteArray);
    QByteArray read_fromArduino();
    QSerialPort* getserial(){return serial;}//GETTERS SERIAL PRIVATE
    QString get_arduino_port_name(){return arduino_port_name;}
private:
    QSerialPort *serial;
    static const quint16 arduino_uno_vendor_id=9025;
    static const quint16 arduino_uno_product_id=67; // REFERENCE BECH QT YAAREF LI ENTY TESTAAMEL F ARDUINO UNO
    QString arduino_port_name;// ARDUINO AVEC PC
    bool arduino_is_available;// CODE DETECTE OU PAS
    QByteArray data;// DATA BECH YAKRA MENHA LES DONNEES




};

#endif // ARDUINOSAHARETJASSER_H
