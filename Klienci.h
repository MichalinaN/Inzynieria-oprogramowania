#pragma once
#include <iostream>
#include <string>

using namespace std;

class Klient : public Decyzje
{
protected:
	string imie;
	string nazwisko;
	string pesel;
public:
	void Odwolaj_sie_od_decyzji();
	Klient();
	~Klient();
};


