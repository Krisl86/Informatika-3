#include "Data.h"
#include <malloc.h>

MUINT pocetZrebov;
struct Zreb* zreby;

void PripravZreby()
{
	zreby = malloc(pocetZrebov * sizeof(struct Zreb));
	for (MUINT i = 0; i < pocetZrebov; i++)
	{
		zreby[i].cislo = i + 1;
		zreby[i].kod = 'A' + i;
	}
}

void ZrusZreby()
{
	free(zreby);
	zreby = NULL;
}