#ifndef CHECKER_H
#define CHECKER_H

#include <QObject>
#include "checkestate.h"

/** Описывает одну шашку.
 * @anchor Василий Почкаенко.
 */
class Checker
{
private:
	/** Позиция шашки*/
	CheckerState position;

	/** Дамка?*/
	bool king;
public:
	Checker();
	Checker(CheckerState position);

	/** Получить позицию шашки*/
	CheckerState GetPosition() const;

	/** Является ли дамкой?*/
	bool IsKing() const;
//signals:

public /*slots*/:
	/** Задать позицию шашки.*/
	void SetPosition(CheckerState position);

	/** Задать является ли дамкой.*/
	void SetKing(bool king);
};

#endif // CHECKER_H
