#pragma once

#include <cstdlib>
#include <cstdio>
#include "Password.h"


const int TABLE_LENGHT = 256;

class Coder
{
private:
	unsigned char codeTable_[TABLE_LENGHT];


	void FillTable();

	void EncodeTable(const char* password);

	void ReadyTable(const char* password);

	void DecodeTable();

	unsigned GetNasada(const char* password);

	void Swap(unsigned char& a, unsigned char& b);
public:
	char* Encode(const char* password, const unsigned char* text);
	unsigned char* Decode(const char* password, const char* encodedText);
};

