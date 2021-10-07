#include "Loteria.h"

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		pocetZrebov = atoi(argv[1]); // atoi() pretypovanie AlphaToInt, ArrayToInt
	}

	if (argc > 2) {
		Tah(atoi(argv[2]));
	}

	return 0;
}