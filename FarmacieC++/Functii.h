#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Medicament.h"
#include "Pastile.h"
#include "Sirop.h"

using namespace std;

vector<Pastile> AdaugarePastila(vector<Pastile> past);
void AfisarePastila(vector<Pastile> past);
void AfisareSirop(vector<Sirop> past);
vector<Sirop> AdaugareSirop(vector<Sirop> sir);
vector<Pastile> StergePastila(string nume, vector<Pastile> med);
vector<Sirop> StergeSirop(string nume, vector<Sirop> med);
