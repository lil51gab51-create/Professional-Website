#include <iostream>
#include <Math.h>
#include <stdio.h>


int main() {
	
//	double log = log(x);
//	double log10 = log(10);
	double xValue;
	std::cout << "Enter value x: ";
	std::cin >> xValue;
		
	
	
	double log2 = log(xValue)/log(2);
	
	printf("You inputed the value %.1f. The log_2 of %.1f = %.1f.", xValue, xValue, log2);
	
	
	
	
	
	return 0;
	
}
