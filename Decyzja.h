#pragma once
#include <iostream>
#include <string>

using namespace std;

class Decyzje
{
protected:
	long Kwota;
	string Status_zgloszenia;
	string Uwagi_pracownika;
public:
	int decyzja();
	int wyplacenie();
	Decyzje();
	~Decyzje();
}