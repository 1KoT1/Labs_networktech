#include "controler.h"
#include <QtNetwork>

Controler::Controler(QObject *parent) :
	QObject(parent), tcpServer(new QTcpServer(this)){
	connect(tcpServer, SIGNAL(newConnection()), this, SLOT(newConection()));
	tcpServer->listen(QHostAddress::Any, 3000);
}

void Controler::newConection(){
}
