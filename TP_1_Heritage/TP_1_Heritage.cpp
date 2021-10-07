#include "TP_1_Heritage.h"

TP_1_Heritage::TP_1_Heritage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void TP_1_Heritage::affichevaleur()
{

}

void TP_1_Heritage::lancede()
{
	n = rand() % 6 + 1; // Permet d'avoir un nombre aléatoire
	ui.de->setText(QLocale().toString(n));
}

void TP_1_Heritage::scoretotal()
{

}

void TP_1_Heritage::remisezero()
{

}

