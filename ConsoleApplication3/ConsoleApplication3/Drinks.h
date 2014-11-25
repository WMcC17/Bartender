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
public:
	void setName(string name);
	string getName();
	Ingredients getIngredients();
	void setIngredients(vector<Ingredients> vect);
	virtual void mix() = 0;


};


#endif