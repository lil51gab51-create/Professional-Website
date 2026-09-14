#include <string>
#include <iostream>

int main() {
	
	double int1;
	double int2;
	double sum;
	double difference;
	double product;
	double quotient;
	
	std::cout<< "Enter 1st number: ";
	std::cin >> int1;
	std::cout << "Enter 2nd number: ";
	std::cin >> int2;
	std::cout <<"\n";
	sum = (int1 + int2);
	difference = (int1 - int2);
	product = (int1 * int2);
	quotient = (int1 / int2);
	
	
	std::cout <<"\n";
	std::cout << "Sum is " <<sum << "\n";
	std::cout << "Difference is " << difference << "\n";
	std::cout << "Product is " << product << "\n";
	std::cout << "Quotient is " << quotient << "\n";


	
	
	
	
	return 0;
}

//sum
//difference
//product
//division
//use int1 = 5; and int2= 8; as example to screenshot
