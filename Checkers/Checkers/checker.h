#ifndef CHECKER_H
#define CHECKER_H

#include <QObject>
#include "checkestate.h"

/** Описывает одну шашку.
 * @anchor Василий Почкаенко.
 */
class Checker : public QObject
{
	Q_OBJECT
private:
	/** Позиция шашки*/
	CheckerState position;

	/** Дамка?*/
	bool king;
public:
	explicit Checker(QObject *parent = 0);

	/** Получить позицию шашки*/
	CheckerState GetPosition() const;

	/** Является ли дамкой?*/
	bool IsKing() const;
signals:

public slots:
	/** Задать позицию шашки.*/
	void SetPosition(CheckerState Position);

	/** Задать является ли дамкой.*/
	void SetKing(bool King);
};

#endif // CHECKER_H
