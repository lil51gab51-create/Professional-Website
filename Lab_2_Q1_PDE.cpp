#include <stdio.h>
#include <math.h>
#include <iostream>


int main() {
	
	
	int time; // user input
	std::cout <<"Enter time in seconds: "; //ask user to enter time they want to use
	std::cin >> time; //	store what time user entered
	double velocity = 0.00001*pow(time,3) - 0.00488*pow(time,2) +0.75795*time + 181.3566;//calculate velocity
	doublef acceleration = 3- 0.000052 * pow(velocity, 2); // calculate acceleration
	printf("Velocity at time %d is %.5f m/s.\n", time, velocity); //print user input for time and velocity calc. result
	printf("Acceleration at time %d is %.5f m/s^2.", time, acceleration); //print user input for time and acceleration calc. result
	
	return 0;
	
}
