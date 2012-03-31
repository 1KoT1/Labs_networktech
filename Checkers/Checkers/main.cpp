#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include "maincontroller.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainController ctrl(&app);
	QmlApplicationViewer viewer;
	viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
	viewer.setMainQmlFile(QLatin1String("qml/Checkers/main.qml"));
	viewer.showExpanded();

	return app.exec();
}
