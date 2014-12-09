#ifndef _DRINKS_CPP_
#define _DRINKS_CPP_


#include "Drinks.h"
#include<iostream>
#include<string>
using namespace std;



string Drinks::getName() {return _name; }
vector<Ingredients> Drinks::getIngredients(){ return ingList; }

void Drinks::setName(string nm){ _name = nm; }
void Drinks::setIngredients(vector<Ingredients> vect){ ingList = vect; }

void Drinks::mix(Drinks drk){
	cout << drk.getName() << " requires the following:\n";
	for (int i = 0; i < drk.getIngredients().size(); i++) // Iterate through IngList
		cout << drk.getIngredients().at(i).getAmtNeed() << "oz of " << drk.getIngredients().at(i).getName() << endl;
}


bool AdultBev::Underage(){
	int age;
	cout << "Enter your age please.\n";
	cin >> age;
	if (age < 21){ return true; }
	else return false;

}



void AdultBev::mix(AdultBev Ab){
	if (!Underage()){
		cout << Ab.getName() << " requires the following:\n";
		for (int i = 0; i < Ab.getIngredients().size(); i++)
			cout << Ab.getIngredients().at(i).getAmtNeed() << "oz of " << Ab.getIngredients().at(i).getName() << endl;
	}
	else cout << "You are too young for this drink. Try our wonderful Coca Cola!\n";
	
};



#endif