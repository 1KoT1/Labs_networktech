#include "checker.h"

Checker::Checker(CheckerState p, QObject * parent) :
	QObject(parent), position(p), king(false){}

CheckerState Checker::GetPosition() const{
	return position;
}

void Checker::SetPosition(CheckerState Position){
	position = Position;
}

bool Checker::IsKing() const{
	return king;
}

void Checker::SetKing(bool King){
	king = King;
}
