#include <iostream>
#include <Math.h>
#include <stdio.h>

int main() {
	
	int age1;
	int age2;
	int age3;
	int age4;
	int age5;
	
	std::cout<<"Enter age 1: ";
	std::cin >> age1;
	
	std::cout<<"Enter age 2: ";
	std::cin >> age2;
	
	std::cout<<"Enter age 3: ";
	std::cin >> age3;
	
	std::cout<<"Enter age 4: ";
	std::cin >> age4;
	
	std::cout <<"Enter age 5: ";
	std::cin >> age5;
	
	double average = (age1 + age2 + age3 + age4 + age5)/5;
	
	printf("The average of age for the family of 5 is %.2f", average);
	
	
	
	
	return 0;
}
