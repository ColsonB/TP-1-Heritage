#include "TP_1_Heritage.h"

TP_1_Heritage::TP_1_Heritage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void TP_1_Heritage::lancede()
{
	dd = rand() % 6 + 1; // Permet d'avoir un nombre aléatoire compris entre 1 et 6
	ui.de->setText(QLocale().toString(dd));

	TP_1_Heritage::scoretotal(dd);
}

void TP_1_Heritage::scoretotal(int dd)
{
	this->n += dd; // Rajoute la valeur de dd dans n
	ui.score->setText(QLocale().toString(this->n));
}

void TP_1_Heritage::remisezero()
{
	n = NULL;
	ui.score->setText(QLocale().toString(n));
}