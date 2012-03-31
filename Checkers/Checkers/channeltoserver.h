#ifndef CHANNELTOSERVER_H
#define CHANNELTOSERVER_H

#include <QObject>
#include "checkestate.h"

class QAbstractSocket;

/** Канал связи с сервером.
 * @author Василий Почкаенко.
 */
class ChannelToServer : public QObject
{
	Q_OBJECT
private:
	QAbstractSocket * socket;
public:
	explicit ChannelToServer(QObject *parent = 0);

signals:

public slots:
	/** Запросить начало игры.*/
	void BeginTheGame();

	/** Отправить отказ от игры*/
	void EndOfTheGame();

	/** Запросить перемещение шашки.*/
	void RequestMove(CheckerState, CheckerState);

};

#endif // CHANNELTOSERVER_H
