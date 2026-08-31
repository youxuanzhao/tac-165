// Youxuan Zhao
// TAC 165, 2026 fall
// Donut

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int donuts,sprinkles = 0;
	float price_per_donut = 2.8;
	float price_per_sprinkle = 0.45;
	// The prices aren't consistent in the assignment, so I use the one appeared in the requirements.
	string name = "";

	cout << "Welcome to the Bakery."<<endl;
	cout << "What is your name? ";
	cin >> name;
	cout << "How many donuts do you want? ";
	cin >> donuts;
	cout << "How many with sprinkles? ";
	cin >> sprinkles;
	
	float total_price = donuts * price_per_donut + sprinkles * price_per_sprinkle;

	cout << fixed << setprecision(2) << name << ", your "<< donuts << " donuts with " << sprinkles << " sprinkles costs $" << total_price << "." << endl;


	return 0;


}
