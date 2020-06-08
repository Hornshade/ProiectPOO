#include "Pastile.h"
Pastile::Pastile(Medicament m,int nrpastile)
{
	Nume = m.GetNume();
	Pret = m.GetPret();
	numarPastile = nrpastile;
}
string Pastile::AfisareString()
{
	string afisare;
	if(Nume.size()<9)
		afisare = " Nume: " + Nume + "\t\t" + "Pret: " + to_string(Pret) + "lei\t" + "Numar pastile: " + to_string(numarPastile);
	else
		afisare = " Nume: " + Nume + "\t" + "Pret: " + to_string(Pret) + "lei\t" + "Numar pastile: " + to_string(numarPastile);
	return afisare;
}