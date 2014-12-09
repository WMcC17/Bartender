#ifndef _MISCFUNK_CPP_
#define _MISCFUNK_CPP_

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Drinks.cpp"
using namespace std;

// Read in the two files
/*  void Readinfiles(){
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

}; */


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
	string nms; // nms = names
	cout << "What ingredients do you have? When done, please enter 'done'\n";
	cin >> nms;
	int i = 0;
	Ingredients ingr;
	int NumbMatches = 0;
	while (nms != "done"){
		ingr.setName(nms);
		ings.push_back(ingr); // Store User input
		i++;
		cin >> nms;
	}
	// Sets the given ingredient vector and Drink IngList to be equivalent up to ings.size()
	
		for (int i = 0; i < ings.size(); i++){ // Go through each given Ingredient
			for (int a = 0; a < drkData.size(); a++){ // Go through each Drink in the Drink vector
				for (int b = 0; b < drkData[a].getIngredients().size(); b++){ // Go through the Ingredient list of each Drink
					if (ings[i].getName() == drkData[a].getIngredients().at(b).getName()) // If they match, swap to the same index
						swap(drkData[a].getIngredients().at(i), drkData[a].getIngredients().at(b));
				}
			}
		}
		cout << "The following match your available ingredients!\n";
		
		for (int a = 0; a < drkData.size(); a++){ // Check all Drinks
			bool matches = true; // Reset mathest to True
			for (int i = 0; i < ings.size(); i++){ // Check ingList of the Drinks from index 0 to ings.size()
				if (ings.at(i).getName() != drkData[a].getIngredients().at(i).getName()) // If they don't all match, matches = false and it is skipped
					matches = false;
			}
			if (matches){ // Check if the Drink has the right ingredients
				cout << drkData.at(a).getName() << endl;
				NumbMatches++;
				MakeDrink(drkData.at(a));
			}
		}

		
		if (NumbMatches = 0)
			cout << "There were no matching Drinks.\n";
		
	// Find a Drink is limited to exact user inputted list of ingredients so as to allow combos of ingredients to narrow the output rather than broaden it
};


void MakeDrink(Drinks drk){
	cout << "Would you like to make this drink? (y/n)\n";
	char choice;
	cin >> choice;
	if (choice == 'y'){
		drk.mix(drk);
	}
}


#endif