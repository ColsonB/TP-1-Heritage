#include "dd.h"
#include <stdlib.h>

dd::dd()
{
	ScoreTotal = 0;
	DeLancer = 0;
	(*this)++;
}

dd::dd(int n)
{
	ValDe = n;
}

void dd::operator++(int)
{
	ValDe = rand() % 6 + 1;
	ScoreTotal += ValDe;
	DeLancer = DeLancer++;
}

void dd::operator=(int& value)
{
	this->ScoreTotal = value;
}


void operator+=(int &n, dd & dd)
{
	n = dd.ValDe;
}

void operator<(int &n, dd &dd)
{ 
	n = dd.ScoreTotal;
}