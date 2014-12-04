#ifndef _MISCFUNK_CPP_
#define _MISCFUNK_CPP_

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Drinks.h"
using namespace std;

// Read in the two files
void Readinfiles(){
	ifstream ingfile;
	ingfile.open("Drink(Ingredients).txt");

	if (ingfile.fail()) {
		cout << "Files not found.\n";
		return 0;
	}

	ifstream drkfile;
	drkfile.open("drinks.txt");

	if (drkfile.fail()){
		cout << "Files not found.\n";
		return 0;
	}

	string line;
	vector<Ingredients> Database;
	Ingredients ingr;
	// Reading in data from Ingredient file
	while (!ingfile.eof()){
		getline(ingfile, line);
		ingr.setName(line);
		Database.push_back(ingr);
	}
	vector<Drinks> drk;

	string name;
	string ing;
	double amt;
	int numing;
	int a = 0;
	// Reading in data from Drinks file
	while (!drkfile.eof()){
		getline(drkfile, name);
		drkfile >> numing;
		drk[a].setName(name);
		vector<Ingredients> ings;
		for (int i = 0; i < numing; i++){

			drkfile >> amt;
			drkfile.ignore();
			getline(drkfile, ing);
			ingr.setAmtNeed(amt);
			ingr.setName(ing);
			ings.push_back(ingr);
		}
		drk[a].setIngredients(ings);
		ings.clear();
	}

}; 


// Ask user for desired software mechanic
bool PickVFind()
{
	int choice;
	cout << "Do you want to Pick-A-Drink (1) OR Find-A-Drink (2)?" << endl;
	cin >> choice;
	while (choice != 1 && choice != 2){
		PickVFind();
		break;
	}
	switch (choice){
	case 1:
		
		return true;
	case 2:
		
		return false;
	default:
		break;
	}
	
	
} 

// Present a list of Drink types and allow user to iterate through the list until they have something they want.
void PickaDrink(){


};

// Ask for User's desired ingredients and return matching Drinks.
void FindaDrink(Ingredients ing){
	

	
};
#endif