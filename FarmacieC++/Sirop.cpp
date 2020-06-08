#include "Sirop.h"
Sirop::Sirop(Medicament m, int cantit)
{
	Nume = m.GetNume();
	Pret = m.GetPret();
	cantitate = cantit;
}
string Sirop::AfisareString()
{
	string afisare;
	if (Nume.size() < 9)
		afisare = " Nume: " + Nume + "\t\t" + "Pret: " + to_string(Pret) + "lei\t" + "Cantitate: " + to_string(cantitate)+"ml";
	else
		afisare = " Nume: " + Nume + "\t" + "Pret: " + to_string(Pret) + "lei\t" + "Cantitate: " + to_string(cantitate)+"ml";
	return afisare;
}