#include "maincontroller.h"
#include "game.h"
#include "clientgame.h"

MainController::MainController(QObject *parent) :
	QObject(parent), game(0), clienGame(0){}

/** Начать игру как сервер.*/
void StartServer(){

}

/** Начать игру как клиент.*/
void ConnectToServer(QString){

}
