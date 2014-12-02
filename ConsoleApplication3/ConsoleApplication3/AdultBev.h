#ifndef _ADULTBEV_H_
#define _ADULTBEV_H_
#include<iostream>
#include<string>
#include"Drinks.h"
using namespace std;

class AdultBev : public Drinks{
private:
public:
<<<<<<< HEAD
	bool Underage();
	AdultBev VirginAlt(); // Remove Alcoholic ingredients and return new bev.
	void mix(); // Cout ingredients and amount needed
=======

	void CheckAge();
	AdultBev VirginAlt(); // Remove Alcoholic ingredients and return new bev.
	void mix(); // Cout ingredients and amount needed

	bool Underage();
	AdultBev VirginAlt();
	void mix();

>>>>>>> origin/master


};
#endif