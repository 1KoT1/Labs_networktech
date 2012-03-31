#include "channeltoserver.h"
#include <QtNetwork>

ChannelToServer::ChannelToServer(QObject *parent) :
	QObject(parent), socket(new QTcpSocket(this)){}

/** Запросить начало игры.*/
void ChannelToServer::BeginTheGame(){

}

/** Отправить отказ от игры*/
void ChannelToServer::EndOfTheGame(){

}

/** Запросить перемещение шашки.*/
void ChannelToServer::RequestMove(CheckerState, CheckerState){

}
