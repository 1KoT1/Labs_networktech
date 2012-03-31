#include "place.h"
#include "checker.h"
#include "checkestate.h"

Place::Place(QObject *parent) :
	QObject(parent), white(QVector<Checker>(10)),
	black(QVector<Checker>(10))
{
	white.append(Checker(A1));
	white.append(Checker(C1));
	white.append(Checker(E1));
	white.append(Checker(G1));
	white.append(Checker(B2));
	white.append(Checker(D2));
	white.append(Checker(F2));
	white.append(Checker(H2));
	white.append(Checker(A3));
	white.append(Checker(C3));
	white.append(Checker(E3));
	white.append(Checker(G3));
	black.append(Checker(A1));
	black.append(Checker(C1));
	black.append(Checker(E1));
	black.append(Checker(G1));
	black.append(Checker(B2));
	black.append(Checker(D2));
	black.append(Checker(F2));
	black.append(Checker(H2));
	black.append(Checker(A3));
	black.append(Checker(C3));
	black.append(Checker(E3));
	black.append(Checker(G3));
}
