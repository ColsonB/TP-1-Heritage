#include "DeHisto.h"

DeHisto::DeHisto()
{
	&dd::operator=(0);
}

void DeHisto::Lancer()
{
	int n;
	dd::operator++(n);

	tab[0] = n;
}

void DeHisto::Lancer(int n)
{
	for (int i = 0; i < n; i++)
	{
		dd::operator++(n);
		int nombre;

		nombre += (*this);
		tab[i] = nombre;
	}
}

int DeHisto::ValTableau(int i)
{
	return tab[i];
}