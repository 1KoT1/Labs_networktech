#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QObject>

class Game;
class ClienGame;

/** Главный контроллер.
 *
 * @author Василий Почкаенко
 */
class MainController : public QObject
{
	Q_OBJECT
private:
	/** Игра.
	 *
	 * Если равен 0, игра не создана. Возможно мы — клиент.
	 */
	Game * game;

	/** Подключение к игре на сервере.
	 *
	 * Если равен 0, значит не подключены к игре. Возможно мы — сервер.
	 */
	ClienGame clienGame;
public:
	explicit MainController(QObject *parent = 0);

signals:

public slots:
	/** Начать игру как сервер.*/
	void StartServer();

	/** Начать игру как клиент.*/
	void ConnectToServer(QString);

};

#endif // MAINCONTROLLER_H
