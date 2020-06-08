#pragma once
#include <string>
using namespace std;

class Medicament
{
public :
	Medicament();
	Medicament(string nume, float pret);
	string GetNume();
	int GetPret();
protected:
	string Nume;
	int Pret;

};

