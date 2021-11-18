#include "dd.h"
#include "TP_1_Heritage.h"

dd::dd()
{
	this->valde;
}

dd::dd(int n)
{

}

void dd::operator++(int)
{
	valtotal = rand() % 6 + 1; // Permet d'avoir un nombre aléatoire compris entre 1 et 6
}

void operator+=(int n, dd & de)
{
	n = de.valde;
}

void operator<(int n, dd &dd)
{
	n = dd.scoretotal;
}