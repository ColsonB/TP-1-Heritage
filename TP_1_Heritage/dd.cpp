#include "dd.h"
#include <stdlib.h>
#include <qRandomGenerator>

dd::dd()
{
	this->ValDe = 0;
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
	int ValDe = LancerDe();
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