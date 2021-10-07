#include "Losovanie.h"
#include "Data.h"

void Losuj(MUINT pocetLosovanychZrebov)
{
	srand((MUINT)time(0));
	for (MUINT i = 0; i < pocetLosovanychZrebov && pocetZrebov >= pocetLosovanychZrebov; i++)
	{

	}
}

void Vymen(MUINT index, MUINT i)
{
	struct Zreb pom; // pomocna premenna
	pom = zreby[index];
	zreby[index] = zreby[i]; // zapis pola ako smernik		zreby[i].metoda() == (zreby + i)->metoda()
	zreby[i] = pom;
}
