#include "Password.h"

Password::Password(const char* password)
{
	memset(password_, 0, PASSWORD_LENGHT);
	if (password)
	{
		int lenght = (int)strlen(password);
		lenght = lenght > PASSWORD_LENGHT ? PASSWORD_LENGHT : lenght;
		memmove(password_, password, lenght);
	}
}

unsigned Password::GetNasada()
{
	unsigned int* nasada1 = (unsigned int*)password_;
	unsigned int* nasada2 = (unsigned int*)password_ + 4;
	return *nasada1 + *nasada2;
}
