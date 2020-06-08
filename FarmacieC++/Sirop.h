#pragma once
#include "Medicament.h"
class Sirop :
	public Medicament
{
public:
	Sirop(Medicament m, int cantitate);
	string AfisareString();
	int GetCantitate();
protected:
	int cantitate;
};

