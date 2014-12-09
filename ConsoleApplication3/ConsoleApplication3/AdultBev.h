#ifndef _ADULTBEV_H_
#define _ADULTBEV_H_
#include<iostream>
#include<string>
#include"Drinks.h"
using namespace std;

class AdultBev : public Drinks{
private:
public:

	bool Underage();
	AdultBev VirginAlt(); // Remove Alcoholic ingredients and return new bev.
	void mix(); // Cout ingredients and amount needed
	

};
#endif