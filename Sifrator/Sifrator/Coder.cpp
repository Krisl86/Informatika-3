#include "Coder.h"

void Coder::FillTable()
{
	for (int i = 0; i < TABLE_LENGHT; i++)
	{
		codeTable_[i] = i;
	}
}

void Coder::EncodeTable(const char* password)
{
	unsigned int nasada = GetNasada(password);
	srand(nasada);

	for (int i = 0; i < TABLE_LENGHT; i++)
	{
		int index = rand() % (TABLE_LENGHT - i);
		Swap(codeTable_[index], codeTable_[TABLE_LENGHT - i - 1]);
	}
}

void Coder::ReadyTable(const char* password)
{
	FillTable();
	EncodeTable(password);
}

void Coder::DecodeTable()
{
	unsigned char pom[TABLE_LENGHT];

	for (int i = 0; i < TABLE_LENGHT; i++)
	{
		pom[codeTable_[i]] = i;
	}


	for (int i = 0; i < TABLE_LENGHT; i++)
	{
		codeTable_[i] = i;
	}
}

unsigned Coder::GetNasada(const char* password)
{
	Password passwordObject(password);
	return passwordObject.GetNasada();
}

void Coder::Swap(unsigned char& a, unsigned char& b)
{
	unsigned char pom(a);
	a = b;
	b = pom;
}

char* Coder::Encode(const char* password, const unsigned char* text)
{
	if (text && *text)
	{
		ReadyTable(password);

		const int textLenght = (int)strlen((char*)text);
		unsigned char* codeText = new unsigned char[textLenght];

		if (codeText)
		{
			for (int i = 0; i < textLenght; i++)
			{
				codeText[i] = codeTable_[text[i]];
			}
			char* encypheredText = new char[3 * textLenght + 1];

			if (encypheredText)
			{
				int k = 0;

				for (int i = 0; i < textLenght; i++)
				{
					char numCode[4];
					sprintf(numCode, "%03u", codeText[i]);
					memmove(&encypheredText[k], numCode, 3);
					k += 3;
				}
				encypheredText[k] = *"\0";
				delete[] codeText;
				return encypheredText;
			}
		}
	}
	return nullptr;
}

unsigned char* Coder::Decode(const char* password, const char* encodedText)
{
	return nullptr;
}
