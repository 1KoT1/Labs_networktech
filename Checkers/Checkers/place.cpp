#include "place.h"
#include "checkestate.h"
#include "checker.h"

Place::Place(QObject *parent) :
	QObject(parent), white(QVector<Checker*>(10)),
	black(QVector<Checker*>(10))
{
	white.append(new Checker(A1, this));
	white.append(new Checker(C1, this));
	white.append(new Checker(E1, this));
	white.append(new Checker(G1, this));
	white.append(new Checker(B2, this));
	white.append(new Checker(D2, this));
	white.append(new Checker(F2, this));
	white.append(new Checker(H2, this));
	white.append(new Checker(A3, this));
	white.append(new Checker(C3, this));
	white.append(new Checker(E3, this));
	white.append(new Checker(G3, this));
	black.append(new Checker(A1, this));
	black.append(new Checker(C1, this));
	black.append(new Checker(E1, this));
	black.append(new Checker(G1, this));
	black.append(new Checker(B2, this));
	black.append(new Checker(D2, this));
	black.append(new Checker(F2, this));
	black.append(new Checker(H2, this));
	black.append(new Checker(A3, this));
	black.append(new Checker(C3, this));
	black.append(new Checker(E3, this));
	black.append(new Checker(G3, this));
}
