#include<iostream>
#include<Math.h>
#include<stdio.h>

int main() {
	
	
	int a;
	double b;
	
	std::cout << "Enter a: ";
	std::cin >> a;
	
	std::cout<<"Enter b: ";
	std::cin >> b;
	
	double c = a/b;
	
	printf("If a = %d and b = %d, a/b = %.2f", a, b, c);
	
	
	return 0;
}
