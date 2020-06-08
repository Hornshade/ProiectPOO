// FarmacieC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Medicament.h"
#include "Functii.h"
#include "Pastile.h"
#include "Sirop.h"
#include  <conio.h>

using namespace std;

int main()
{   
    
    vector<Pastile> pastila;
    vector<Sirop> sirop;
    char optiune;
    string nume;
    bool validare = true;
    while (validare)
    {
        system("cls");
        cout << "1.Adaugare medicament." << endl;
        cout << "2.Afisare sirop." << endl;
        cout << "3.Afisare pastile." << endl;
        cout << "4.Sterge sirop" << endl;
        cout << "5.Sterge pastila" << endl;
        cout << "X.Iesire" << endl;
        cout << "\n Alegeti o optiune : ";
        cin >> optiune;
        switch (optiune)
        {
        case '1':
        {
            char check;
            cout << "1.Adaugati o pastila." << endl;
            cout << "2.Adaugati un sirop." << endl;
            cout << "X.Iesire" << endl;
            cout << "Alegeti o optiune : ";
            cin >> check;
            switch (check)
            {
            case '1':
                pastila=AdaugarePastila(pastila);
                break;
            case '2':
                sirop=AdaugareSirop(sirop);
                break;
            case '3':
                break;
            }
            break;
        }
        case '2':
        {
            AfisareSirop(sirop);
            _getch();
            break;
        }
             
        case '3':
        {
            AfisarePastila(pastila);
            _getch();
            break;
        }
        case '4':
        {
            AfisareSirop(sirop);
            string x;
            cout << "Introduceti numele siropului pe care doriti sa-l stergeti : ";
            cin >> x;
            sirop = StergeSirop(x, sirop);
            break;
        }
        case '5':
        {
            AfisarePastila(pastila);
            string x;
            cout << "Introduceti numele siropului pe care doriti sa-l stergeti : ";
            cin >> x;
            pastila = StergePastila(x,pastila);
            break;
        }
        case 'X':
            validare = false;
            break;
        default:
            break;
        }
    }
    return 0;
}

