#include "Medicament.h"
using namespace std;
Medicament::Medicament()
{
	Nume = "";
	Pret = 0;
}

Medicament::Medicament(string nume, float pret)
{
	Nume = nume;
	Pret = pret;
}

string Medicament::GetNume()
{
	return Nume;
}
int Medicament::GetPret()
{
	return Pret;
}