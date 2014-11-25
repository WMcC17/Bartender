#include<iostream>
#include<string>
using namespace std;

bool How()
{
	int choice;
	cout << "Do you want to Pick-A-Drink (1) OR Recieve a Recipe Based On Your Ingedients (2)?" << endl;
		cin >> choice;
		if (choice == 1)
			return true;
		if (choice == 2)
			{
			cout << "What ingredietns do you have?" << endl;
			return true;
		}
		else return false;
}

int main(){

	while (!How()){
		How();
	};
}