//
// Created by kirill on 17.12.18.
//


#include "SerialPort.h"

using namespace SP;

SerialPort::SerialPort(std::string path, unsigned int speed) {

	sp = new boost::asio::serial_port(ios,path.c_str());
	setSpeed(speed);
    
	std::cout << "Path: " << path << "\n";

}

SerialPort::~SerialPort() {
	Close();
}

void SerialPort::Close() {
	sp->close();
	delete sp;
}

void SerialPort::setSpeed(int value) {
	sp->set_option(boost::asio::serial_port::baud_rate(value));
}


int SerialPort::getSpeed() {
	return _speed;
}

int WriteRead(char *write, char *read){
	return 0;
}
