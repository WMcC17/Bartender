
#include"Drinks.cpp"
#include"MiscFunk.cpp"

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

int main(){
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
	vector<Ingredients> IngsData;
	Ingredients ingr;
	// Reading in data from Ingredient file
	while (!ingfile.eof()){
		getline(ingfile, line);
		ingr.setName(line);
		IngsData.push_back(ingr);
	}
	vector<Drinks> drkData;
	Drinks drk;
	string name;
	string ing;
	double amt;
	int numing;
	int a = 0;
	// Reading in data from Drinks file
	while (!drkfile.eof()){
		getline(drkfile, name);
		drkfile >> numing;
		drkData[a].setName(name);
		vector<Ingredients> ings;
		for (int i = 0; i < numing; i++){

			drkfile >> amt;
			drkfile.ignore();
			getline(drkfile, ing);
			ingr.setAmtNeed(amt);
			ingr.setName(ing);
			ings.push_back(ingr);
		}
		
		drk.setIngredients(ings);
		drkData.push_back(drk);
		ings.clear();
		a++;
	}
	

	if (PickVFind())
		PickaDrink(drkData);
	else{ FindaDrink(drkData); }

}