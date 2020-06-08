#pragma once
#include "Medicament.h"
class Pastile :
	public Medicament
{
public:
	Pastile(Medicament med,int numarpastile);
	string AfisareString();
	int GetNrPastile();
protected:
	int numarPastile;
};

