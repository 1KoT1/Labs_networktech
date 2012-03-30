#include "checker.h"

Checker::Checker(QObject *parent) :
	QObject(parent), position(None), king(false)
{
}

CheckerState Checker::GetPosition(){
	return position;
}

void Checker::SetPosition(CheckerState Position){
	position = Position;
}

bool Checker::IsKing(){
	return king;
}

void Checker::SetKing(bool King){
	king = King;
}
