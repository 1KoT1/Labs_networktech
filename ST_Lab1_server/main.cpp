#include <QtGui/QApplication>
#include <QtNetwork>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QTcpServer tcpServer(&a);
	tcpServer.listen(QHostAddress::Any, 3000);
	while(tcpServer.isListening()){
		qDebug()<<a.trUtf8("%2. Ожидаю подключения па порте %1").arg(tcpServer.serverPort()).arg(QTime::currentTime().toString());
	}
	QTcpSocket * socket = tcpServer.nextPendingConnection();
//	qDebug()<<a.trUtf8("Есть подклучение: адрес: %1, порт: %2").arg(socket->peerName()).arg(socket->peerPort());
//	return a.exec();
}
