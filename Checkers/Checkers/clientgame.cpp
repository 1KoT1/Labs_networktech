#include "clientgame.h"
#include "channeltoserver.h"
#include "place.h"

ClientGame::ClientGame(QObject *parent) :
		QObject(parent)
{
}

/** Отказ в перемещении шашки.*/
void ClientGame::FailureMove(){

}

/** Изменение позиции.*/
void ClientGame::ChangePlace(Place *){

}

/** Отказ от игры первым игроком.*/
void ClientGame::EndOfTheGame1(){

}

/** Отказ от игры вторым игроком.*/
void ClientGame::EndOfTheGame2(){

}

/** Возможные ходы.
 *
 * Высылает сигнал со списком возможных позиций.
 */
void ClientGame::PossibleMove(CheckerState &){

}
