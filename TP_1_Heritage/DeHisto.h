#pragma once
#include "dd.h"

class DeHisto : public dd
{
private:

	int tab[7];

public:
	DeHisto();
	void Lancer();
	void Lancer(int n);
	int ValTableau(int i);
};

