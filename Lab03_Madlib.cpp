#include<iostream>
#include<string>

int main(){
	std::string animal, place, plural;
	int number;

	std::cout<<"Choose an animal: ";
	std::cin>>animal;

	std::cout<<"Choose a place: ";
	std::cin>>place;

	std::cout<<"Enter a number: ";
	std::cin>>number;

	std::cout<<"Name a thing: ";
	std::cin>>plural;

	std::cout<<"The "<<animal<<" went to the "<<place<<" and ate "<<number<<" "<<plural<<".\n";

	return 0;
}
