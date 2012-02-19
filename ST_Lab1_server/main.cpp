#include <QtGui/QApplication>
#include <QtNetwork>
#include "controler.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Controler c(&a);

	return a.exec();
}
