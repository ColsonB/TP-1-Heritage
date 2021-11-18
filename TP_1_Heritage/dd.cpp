#include "dd.h"
#include <stdlib.h>
#include <qRandomGenerator>

dd::dd()
{
	this->ValDe;
}

dd::dd(int n)
{
	this->ValDe = n;
}

int dd::LancerDe()
{
	int ValDe = QRandomGenerator::global()->bounded(1, 7);
	this->ValDe = ValDe;
	return ValDe;
}

void dd::operator++(int)
{
	ScoreTotal += ValDe;
}

void operator+=(int n, dd & de)
{
	n = de.ValDe;
}

void operator<(int n, dd &dd)
{
	n = dd.ScoreTotal;
}