#include "place.h"

Place::Place(QObject *parent) :
	QObject(parent), white(QVector(12)), black(QVector(12))
{
	white.append(Checker(A1,this));
	white.append(Checker(C1,this));
	white.append(Checker(F1,this));
	white.append(Checker(H1,this));
	white.append(Checker(B2,this));
	white.append(Checker(D2,this));
	white.append(Checker(E2,this));
	white.append(Checker(G2,this));
	white.append(Checker(A3,this));
	white.append(Checker(C3,this));
	white.append(Checker(F3,this));
	white.append(Checker(H3,this));
	black.append(Checker(A1,this));
	black.append(Checker(C1,this));
	black.append(Checker(F1,this));
	black.append(Checker(H1,this));
	black.append(Checker(B2,this));
	black.append(Checker(D2,this));
	black.append(Checker(E2,this));
	black.append(Checker(G2,this));
	black.append(Checker(A3,this));
	black.append(Checker(C3,this));
	black.append(Checker(F3,this));
	black.append(Checker(H3,this));
}
