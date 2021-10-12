#include "de.h"

void de::lancede()
{
	TP_1_Heritage::lancede();
	dd = rand() % 6 + 1; // Permet d'avoir un nombre aléatoire compris entre 1 et 6
	ui.de->setText(QLocale().toString(dd));

	TP_1_Heritage::scoretotal(dd);
}

void de::scoretotal(int dd)
{
	TP_1_Heritage::scoretotal(dd);
	this->n += dd;
	ui.score->setText(QLocale().toString(this->n));
}

void de::remisezero()
{
	TP_1_Heritage::remisezero();
	n = NULL;
	ui.score->setText(QLocale().toString(n));
}