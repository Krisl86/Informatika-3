#pragma once

//#ifdef data.h
//#define data.h
//#endif // data.h


#ifndef WIN32 //ifdef a ifndef je rozdiel
#define MUINT unsigned int
#endif // WIN32

//typedef unsigned int MUINT;

struct Zreb
{
	MUINT cislo;
	char kod;
};

void PripravZreby();
void ZrusZreby();

extern MUINT pocetZrebov;
extern struct Zreb* zreby;


