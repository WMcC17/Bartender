#ifndef _DRINKS_H_
#define _DRINKS_H_
#include "Ingredients.h"
#include<string>
#include<vector>
using namespace std;

class Drinks{
private:
	string _name;
	int NumofIngs;
	vector<Ingredients> ingList;
	int check;
	
public:
	Drinks(){};
	void setName(string name);
	string getName();
	vector<Ingredients> getIngredients();
	void setIngredients(vector<Ingredients> vect);
	void mix(Drinks drik);
	void setCheck(int chk){ check = chk; }
	int getCheck(){ return check; }
};


class AdultBev : public Drinks{
public:

	bool Underage();
	AdultBev VirginAlt(AdultBev Ab); // Remove Alcoholic ingredients and return new bev.
	void mix(AdultBev Ab); // Cout ingredients and amount needed
};



#endif