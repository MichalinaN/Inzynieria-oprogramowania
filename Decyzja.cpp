#include <iostream>
#include <string>
#include "Decyzja.h"

using namespace std;

Decyzje::~Decyzje()
{

}

Decyzje::Decyzje()
{
	
}

int Decyzje::decyzja()
{
	bool dec;
	if (dec == true)
	{
		dec = "Odszkodowanie zostanie wyplacone!";
		return dec;
	}
	else
	{
		dec = "Odszkodowanie nie zostalo przyznane!";
		return dec;
	}
}

int Decyzje::wyplacenie()
{

}