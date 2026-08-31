#include<iostream>
#include<string>

int main(){
	int base_price = 900;
	int increment = 100;
	std::string temp = "";
	std::string questions[4] = {
		"Are you under 25 years old? (y/n)", 
		"Is your driving history less than 5 years? (y/n)", 
		"Do you have any accidents in the last 5 years? (y/n)", 
		"Is your card older than 5 years? (y/n)"};
	
	for(int i = 0; i < 4; i++){
		std::cout << questions[i] << " ";
		std::cin >> temp;
		if(temp == "y" || temp == "Y"){
			base_price += increment;
		}
		else if(temp == "n" || temp == "N"){
			base_price += 0;
		}
		else{
			std::cout << "Invalid input.";
			return 1;
		}
	}

	std::cout << "Your insurance premium is: $" << base_price << std::endl;
	return 0;
}
