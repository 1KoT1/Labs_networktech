#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QVector>

class CheckerState;
class Checker;
class Place;

/** Игра
 *
 * Создаётся на сервере.
 * @author Василий Почкаенко.
 */
class Game : public QObject
{
	Q_OBJECT
private:
	/** Цвет первого игрока.*/
	bool gamer1Color;

	/** Позиция на доске.*/
	Place * place;
public:
	explicit Game(QObject *parent = 0);

signals:

public slots:
	/** Запрос на начало игры.*/
	void BeginOfGame();

	/** Перемещение шашки первым игроком.*/
	void Move1(CheckerState from, CheckerState to);

	/** Перемещение шашки вторым игроком.*/
	void Move2(CheckerState from, CheckerState to);

	/** Здаётся первый игрок. */
	void EndOfGame1();

	/** Здаётся первый игрок. */
	void EndOfGame2();

	/** Возможные ходы.
	 *
	 * Высылает сигнал с возможными ходами.
	 */
	void PossibleMove(CheckerState) const;

private:
	/** Получить указатель на шашку по позиции. */
	Checker * getCeckerByPosition(CheckerState) const;

	/** Возможные ходы. */
	QVector<CheckerState> & possibleMove(Checker) const;

	/** переместить указанную шашку */
	void move(Checker, CheckerState);
};

#endif // GAME_H
