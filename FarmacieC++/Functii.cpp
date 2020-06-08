#include "Functii.h"
#include "Pastile.h"
#include "Sirop.h"

vector<Pastile> AdaugarePastila(vector<Pastile> pastila)
{
	string nume;
	float pret;
	int nrpastile;
	cout << "Introduceti numele pastilei: ";
	cin >> nume;
	cout << "\nIntroduceti pretul pastilei in lei: ";
	cin >> pret;
	cout << "\nIntroduceti numarul de pastile : ";
	cin >> nrpastile;
	Medicament medicament(nume, pret);
	Pastile past(medicament, nrpastile);
	
	pastila.push_back(past);
	return pastila;
}
vector<Sirop> AdaugareSirop(vector<Sirop> sirop)
{
	string nume;
	float pret;
	int cantitate;
	cout << "Introduceti numele siropului: ";
	cin >> nume;
	cout << "\nIntroduceti pretul siropului in lei: ";
	cin >> pret;
	cout << "\nIntroduceti cantitatea siropului(ml): ";
	cin >> cantitate;
	Medicament medicament(nume, pret);
	Sirop sir(medicament, cantitate);
	sirop.push_back(sir);
	return sirop;
}
void AfisarePastila(vector<Pastile> past) 
{
	cout << "Lista pastilelor: " << endl;
	for (int i = 0; i < past.size(); i++)
	{
		cout << past[i].AfisareString()<< endl;
	}	
}
void AfisareSirop(vector<Sirop> sir)
{
	cout << "Lista sirop: " << endl;
	for (int i = 0; i < sir.size(); i++)
	{
		cout << sir[i].AfisareString()<< endl;
	}

}
vector<Pastile> StergePastila(string nume, vector<Pastile> med)
{
	for (int i = 0; i < med.size(); i++)
	{
		if (nume == med[i].GetNume())
			med.erase(med.begin()+i);
	}
	return med;
	/*for (vector<Medicament>::iterator i = med.begin(); i != med.end(); ++i)
		if (i->GetNume() == nume)
			med.erase(i);*/
}
vector<Sirop> StergeSirop(string nume, vector<Sirop> med)
{
	for (int i = 0; i < med.size(); i++)
	{
		if (nume == med[i].GetNume())
			med.erase(med.begin() + i);
	}
	return med;
	/*for (vector<Medicament>::iterator i = med.begin(); i != med.end(); ++i)
		if (i->GetNume() == nume)
			med.erase(i);*/
}