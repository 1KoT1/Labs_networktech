#include "place.h"
#include "checker.h"
#include "checkestate.h"

Place::Place(QObject *parent) :
	QObject(parent), white(QVector<Checker>()),
	black(QVector<Checker>())
{
	white.append(Checker(A1,this));
	white.append(Checker(C1,this));
	white.append(Checker(E1,this));
	white.append(Checker(G1,this));
	white.append(Checker(B2,this));
	white.append(Checker(D2,this));
	white.append(Checker(F2,this));
	white.append(Checker(H2,this));
	white.append(Checker(A3,this));
	white.append(Checker(C3,this));
	white.append(Checker(E3,this));
	white.append(Checker(G3,this));
	black.append(Checker(A1,this));
	black.append(Checker(C1,this));
	black.append(Checker(E1,this));
	black.append(Checker(G1,this));
	black.append(Checker(B2,this));
	black.append(Checker(D2,this));
	black.append(Checker(F2,this));
	black.append(Checker(H2,this));
	black.append(Checker(A3,this));
	black.append(Checker(C3,this));
	black.append(Checker(E3,this));
	black.append(Checker(G3,this));
}
