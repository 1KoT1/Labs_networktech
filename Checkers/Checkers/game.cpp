#include "game.h"
#include "checker.h"
#include "checkestate.h"
#include "place.h"

Game::Game(QObject *parent) :
	QObject(parent), place(new Place(this))
{
}


/** Запрос на начало игры.*/
void Game::BeginOfGame(){

}

/** Перемещение шашки первым игроком.*/
void Game::Move1(CheckerState from, CheckerState to){

}

/** Перемещение шашки вторым игроком.*/
void Game::Move2(CheckerState from, CheckerState to){

}

/** Здаётся первый игрок. */
void Game::EndOfGame1(){

}

/** Здаётся первый игрок. */
void Game::EndOfGame2(){

}

/** Возможные ходы.
 *
 * Высылает сигнал с возможными ходами.
 */
void Game::PossibleMove(CheckerState) const{

}

/** Получить указатель на шашку по позиции. */
Checker * Game::getCeckerByPosition(CheckerState) const{

}

/** Возможные ходы. */
QVector<CheckerState> & Game::possibleMove(Checker) const{

}

/** переместить указанную шашку */
void Game::move(Checker, CheckerState){

}