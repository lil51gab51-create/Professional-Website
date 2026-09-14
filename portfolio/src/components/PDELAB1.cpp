#include <stdio.h>
#include <iostream>
#include <string>


int main() {
	
	
	std::string name;
	int age;
	int EID;
	std::string classification;
	std::string major;
	
	std::cout << "Enter your full name: \n";
	std::getline(std::cin, name);
	
	std::cout << "Enter your age: \n";
	std::cin >> age;
	
	std::cout << "Enter your student ID: \n";
	std::cin >> EID;
	
	std::cout << "What's your classification? \n";
	std::cin >> classification;
	
	std::cout << "What's your major? \n";
	std::getline(std::cin >> std::ws, major);

	
	std::cout << "Your name is " << name << ". \n";
	std::cout << "You are " << age << " years old.\n";
	std::cout << "Your student ID is: " << EID << "\n";
	std::cout << "You are classified as a " << classification << "\n";
	std::cout << "Your major is \n" << major;

	
	return 0;
}
//student ID
//classification
//major



