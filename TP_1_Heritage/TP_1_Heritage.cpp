#include "TP_1_Heritage.h"
#include "dd.h"

TP_1_Heritage::TP_1_Heritage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void TP_1_Heritage::lancede()
{
	TP_1_Heritage::score();
}

void TP_1_Heritage::scoretotal()
{
	this->n += *de; // Rajoute la valeur de dd dans n
	ui.score->setText(QLocale().toString(this->n));
}

void TP_1_Heritage::remisezero()
{
	n = NULL; // Mets la valeur de n à 0
	ui.score->setText(QLocale().toString(n));
}

void TP_1_Heritage::score()
{
	this->n < (*de);
	QString ScoreTotal = QString::number(this->n);
	ui.de->setText(ScoreTotal);
}