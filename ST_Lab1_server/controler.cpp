#include "controler.h"
#include <QtNetwork>

Controler::Controler(QObject *parent) :
	QObject(parent), tcpServer(new QTcpServer(this)){
	connect(tcpServer, SIGNAL(newConnection()), this, SLOT(newConection()));
	tcpServer->listen(QHostAddress::Any, 3000);
	qDebug()<<trUtf8("Ожидаю подключения.");
}

void Controler::newConection(){
	QAbstractSocket * socket = tcpServer->nextPendingConnection();
	qDebug()<<trUtf8("Получено соединение: %1:%2").arg(socket->peerAddress().toString()).arg(socket->peerPort());
}
