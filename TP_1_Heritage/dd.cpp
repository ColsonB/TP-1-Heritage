#include "dd.h"

dd::dd()
{

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

}