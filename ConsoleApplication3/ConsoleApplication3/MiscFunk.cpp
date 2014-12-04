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
void FindaDrink(vector<Drinks> drkData){
	
	vector<Ingredients> ings;
	string nms;
	cout << "What ingredients do you have? When done, please enter 'done'\n";
	cin >> nms;
	int i = 0;
	Ingredients ingr;
	while (nms != "done"){
		ingr.setName(nms);
		ings.push_back(ingr);
		i++;
		cin >> nms;
	}

		for (int i = 0; i < ings.size(); i++){
			for (int a = 0; a < drkData.size(); a++){
				for (int b = 0; b < drkData[a].getIngredients().size(); b++){
					if (ings[i].getName() == drkData[a].getIngredients().at(b).getName())
						swap(drkData[a].getIngredients().at(i), drkData[a].getIngredients().at(b));
				}
			}
		}
		bool matches = true;
		for (int a = 0; a < drkData.size(); a++){
			for (int i = 0; i < ings.size(); i++){
				if (ings[i].getName() != drkData[a].getIngredients().at(i).getName)
					matches = false;
			}
			if (matches)
				cout << drkData.at(a).getName << endl;
		}
	
};
#endif