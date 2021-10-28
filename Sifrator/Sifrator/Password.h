#pragma once

#include <cstring>

const int PASSWORD_LENGHT = 8;

class Password
{
private:
	union 
	{
		char password_[PASSWORD_LENGHT];
		long long nasada_;
	};
public:
	Password(const char* password);
	unsigned GetNasada();
};

