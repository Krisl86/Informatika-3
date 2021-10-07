#include "Loteria.h"

void Tah(MUINT pocetLosovanychZrebov)
{
	PripravZreby();
	Losuj(pocetLosovanychZrebov);
	Vypis(pocetLosovanychZrebov);
	ZrusZreby();
}
