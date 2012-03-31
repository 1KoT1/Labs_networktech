#include "clientgame.h"
#include "channeltoserver.h"

ClientGame::ClientGame(QObject *parent) :
		QObject(parent)
{
}

/** Отказ в перемещении шашки.*/
void FailureMove(){

}

/** Изменение позиции.*/
void ChangePlace(Place){

}

/** Отказ от игры первым игроком.*/
void EndOfTheGame1(){

}

/** Отказ от игры вторым игроком.*/
void EndOfTheGame2(){

}

/** Возможные ходы.
 *
 * Высылает сигнал со списком возможных позиций.
 */
void PossibleMove(CheckerState){

}
