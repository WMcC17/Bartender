#ifndef _INGREDIENTS_H_
#define _INGREDIENTS_H_
#include<string>
#include<vector>
using namespace std;

class Ingredients{
private:
	string _nm;
	double _amtNeeded;
public:
	
	void setName(string name);
	string getName();
	void setAmtNeed(double amtn);
	double getAmtNeed();
	


};


#endif