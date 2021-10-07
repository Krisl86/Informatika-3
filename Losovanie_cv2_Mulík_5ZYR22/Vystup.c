#include "Vystup.h"

void Vypis(MUINT pocetLosovanychZrebov)
{
	printf("\n----------VYHERCOVIA----------\n");

	for (MUINT i = 0; i < pocetLosovanychZrebov && i < pocetZrebov; i++)
	{
		printf("%3u Kod: %c %t cislo: %-10u\n", i + 1, zreby[i].kod, (zreby + i)->cislo);
	}

	printf("\n----------KONIEC----------\n");
}
