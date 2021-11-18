#include "TP_1_Heritage.h"
#include "dd.h"

TP_1_Heritage::TP_1_Heritage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void TP_1_Heritage::LanceDe()
{
	(*de)++;

	TP_1_Heritage::Score();
	TP_1_Heritage::AfficheScore();

	this->n += (*de);
	this->n < (*de);
}

void TP_1_Heritage::ScoreTotal()
{
	this->n += *de; // Rajoute la valeur de dd dans n
	ui.score->setText(QLocale().toString(this->n));
}

void TP_1_Heritage::RemiseZero()
{
	n = NULL; // Mets la valeur de n à 0
	ui.score->setText(QLocale().toString(n));
}

void TP_1_Heritage::Score()
{
	this->n < (*de);

	QString QScoreTotal = QString::number(this->n);
	ui.de->setText(QScoreTotal);
}

void TP_1_Heritage::AfficheScore()
{
	this->n += (*de);

	QString QScore = QString::number(this->n);
	ui.de->setText(QScore);
}