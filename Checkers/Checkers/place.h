#ifndef PLACE_H
#define PLACE_H

#include <QObject>
#include <QVector>

class Checker;

/** Положение на доске
 * @author Василий Почкаенко
 */
class Place : public QObject
{
	Q_OBJECT
private:
	/** Белые шашки.*/
	QVector<Checker> white;

	/** Чёрные шашки.*/
	QVector<Checker> black;
public:
	explicit Place(QObject *parent = 0);

signals:

public slots:

};

#endif // PLACE_H
