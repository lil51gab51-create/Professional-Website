#include <iostream>
//#include <Math.h>
#include <stdio.h>


int main() {
	
	int Ax;
	int Ay;
	int Bx;
	int By;
	
	std::cout << "Enter the x coordinate for Point A: ";
		std::cin >> Ax;

	std::cout << "Enter the y coordinate for Point A: ";
		std::cin >> Ay;

	
	std::cout << "Enter the x coordinate for Point B: ";
		std::cin >> Bx;

	std::cout << "Enter the y coordinate for Point B: ";
		std::cin >> By;



	double xdistance = Bx-Ax;
	double ydistance = By-Ay;
	
	printf("Distance between Point A (%d, %d) and Point B (%d, %d) is (%.1f, %.1f).", Ax, Ay, Bx, By, xdistance, ydistance);
	
	
	
	return 0;
}
