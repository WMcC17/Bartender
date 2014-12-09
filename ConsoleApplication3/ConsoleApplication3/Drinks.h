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
	int Check;
public:
	void setName(string name);
	string getName();
	vector<Ingredients> getIngredients();
	void setIngredients(vector<Ingredients> vect);
	void mix(){};
	void setCheck(int chk){ Check = chk; }
	int getCheck(){ return Check; }


};


#endif