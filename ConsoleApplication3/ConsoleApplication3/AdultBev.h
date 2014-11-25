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
	AdultBev VirginAlt();
	void mix();


};
#endif