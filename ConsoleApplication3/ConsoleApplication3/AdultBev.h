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

	
	AdultBev VirginAlt(); // Remove Alcoholic ingredients and return new bev.
	void mix(); // Cout ingredients and amount needed

	bool Underage();
	AdultBev VirginAlt();
	

>>>>>>> origin/master


};
#endif