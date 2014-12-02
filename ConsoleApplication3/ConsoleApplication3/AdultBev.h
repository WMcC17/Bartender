#ifndef _ADULTBEV_H_
#define _ADULTBEV_H_
#include<iostream>
#include<string>
#include"Drinks.h"
using namespace std;

class AdultBev : public Drinks{
private:
public:

	
	AdultBev VirginAlt(); // Remove Alcoholic ingredients and return new bev.
	void mix(); // Cout ingredients and amount needed

	bool Underage();
	AdultBev VirginAlt();
	



};
#endif