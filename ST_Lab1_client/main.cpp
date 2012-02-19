#include <QtGui/QApplication>
#include <QtNetwork>
int main(int argc, char *argv[])
{
		QApplication a(argc, argv);
		QTcpSocket socket(&a);
		socket.connectToHost(QHostAddress::LocalHost, 3000);
		for(int i = 0; i < 1000000; ++i)
			qDebug()<<i;
}
