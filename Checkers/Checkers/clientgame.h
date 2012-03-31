#ifndef CLIENTGAME_H
#define CLIENTGAME_H

#include <QObject>
#include "checkestate.h"

class ChannelToServer;
class Place;

/** Игра на стороне клиента
 *
 * Игра находится на стороне сервера. ClientGame владеет только
 * вторым игроком. Для всего остального связывается с сервером.
 * Хранит у себя экземпляр Place для отображения позиции,
 * постоянно синхронизируя с сервером.
 * @author Василий Почкаенко.
 */
class ClientGame : public QObject
{
	Q_OBJECT
private:
	/** Канал связи с сервером. */
	ChannelToServer * channelToServer;
public:
	explicit ClientGame(QObject *parent = 0);

signals:

public slots:
	/** Отказ в перемещении шашки.*/
	void FailureMove();

	/** Изменение позиции.*/
	void ChangePlace(Place *);

	/** Отказ от игры первым игроком.*/
	void EndOfTheGame1();

	/** Отказ от игры вторым игроком.*/
	void EndOfTheGame2();

	/** Возможные ходы.
	 *
	 * Высылает сигнал со списком возможных позиций.
	 */
	void PossibleMove(CheckerState &);
};

#endif // CLIENTGAME_H
