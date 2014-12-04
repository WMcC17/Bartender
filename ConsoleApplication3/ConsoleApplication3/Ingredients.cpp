#ifndef _INGREDIENTS_CPP_
#define _INGREDIENTS_CPP_

#include "Ingredients.h"
#include<iostream>
#include<string>
using namespace std;

string Ingredients::getName(){ return _nm; }
double Ingredients::getAmtNeed(){ return _amtNeeded; }

void Ingredients::setAmtNeed(double amtn){ _amtNeeded = amtn; }
void Ingredients::setName(string name){ _nm = name; }

#endif
