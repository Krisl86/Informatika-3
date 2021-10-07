#include "Losovanie.h"
#include "Data.h"

void Losuj(MUINT pocetLosovanychZrebov)
{
	MUINT index = 0;
	srand((MUINT)time(0));

	for (MUINT i = 0; i < pocetLosovanychZrebov && pocetZrebov >= pocetLosovanychZrebov; i++)
	{
		index = rand() % (pocetZrebov - i) + i;
		Vymen(index, i);
	}
}

void Vymen(MUINT index, MUINT i)
{
	struct Zreb pom; // pomocna premenna
	pom = zreby[index];
	zreby[index] = zreby[i]; // zapis pola ako smernik		zreby[i].metoda() == (zreby + i)->metoda()
	zreby[i] = pom;
}
