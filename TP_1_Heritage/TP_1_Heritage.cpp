#include <stdlib.h>
#include <stdio.h>
#include <qDebug>
#include "TP_1_Heritage.h"
#include "dd.h"

TP_1_Heritage::TP_1_Heritage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	de = new dd();
}

void TP_1_Heritage::LanceDe()
{
	(*de)++;

	TP_1_Heritage::AfficheValeurDe();

	this->n += (*de);
	qDebug() << this->n;
	this->n < (*de);
}

void TP_1_Heritage::AfficheValeurDe()
{
	this->n += (*de);

	QString Score = QString::number(this->n);
	ui.de->setText(Score);
}

void TP_1_Heritage::RemiseZero()
{
	(*de)=(0); // Mets la valeur de n à 0
}

void TP_1_Heritage::AfficheScore()
{
	this->n < (*de);

	QString ScoreTotal = QString::number(this->n);
	ui.score->setText(ScoreTotal);
}