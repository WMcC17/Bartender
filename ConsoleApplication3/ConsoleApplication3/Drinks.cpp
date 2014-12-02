#include "Drinks.h"
#include<iostream>
#include<string>
using namespace std;

string Drinks::getName() {return _name; }
vector<Ingredients> Drinks::getIngredients(){ return ingList; }

void Drinks::setName(string nm){ _name = nm; }
void Drinks::setIngredients(vector<Ingredients> vect){ ingList = vect; }
