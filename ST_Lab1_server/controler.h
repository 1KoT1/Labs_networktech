#ifndef CONTROLER_H
#define CONTROLER_H

#include <QObject>
class QTcpSocket;
class QTcpServer;

/** Контролер содержит основную логику программы.
	* @author Василий Почкаенко
	*/
class Controler : public QObject
{
	Q_OBJECT
private:
	QTcpServer * tcpServer;
public:
	explicit Controler(QObject *parent = 0);
private slots:
	/** Обрабочик нового подключения.
		*/
	void newConection();

};

#endif // CONTROLER_H
