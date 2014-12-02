<<<<<<< HEAD
#include"Drinks.h"
=======

#include"Drinks.h"
#include"MiscFunk.cpp"

>>>>>>> origin/master
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;


<<<<<<< HEAD
int main(){

	ifstream ingfile;
	ingfile.open("Drink(Ingredients).txt");
=======
>>>>>>> origin/master

int main(){
	Readinfiles();



	
<<<<<<< HEAD
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

	while (!How()){
		How();
	};
=======
>>>>>>> origin/master
}