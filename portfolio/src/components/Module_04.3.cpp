#include <stdio.h>
#include <iostream>
#include <string>


int main() {
	
	printf("First name | Last Name\n");
	printf("---------------------------\n");
	
	std::string first;
	std::cout << "Enter your first name: \n";
	std::cin >> first;
	
	std::string last;
	std::cout << "Enter your last name: \n";
	std::cin >> last;
	
	std::cout << first << " | " << last;
	
	return 0;
}
