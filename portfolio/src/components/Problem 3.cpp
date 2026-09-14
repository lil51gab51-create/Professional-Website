#include <iostream>
#include <Math.h>
#include <stdio.h>

int main() {
	
	int R = 100; //resistance (ohms)
	double f;
	double L = .1; // inductance (H)
	double C = pow(10,-7); //capacitance (F)
	int Vs = 1; // source voltage (volts)
	double pi = M_PI;
	
	std::cout<<"Enter frequency: ";
	std::cin>> f;
	
	double w = 2*pi*f;
	
	double wl = ((w*L) - 1/(w*C));
	double pwl = pow(wl,2);
	double sq = sqrt(pow(R,2)+(pwl));
	double voltage = (R/(sq))*Vs; //formula for voltage across a resistor in an RLC circuit
	
	printf("Vr = %.4f", voltage);
	
	return 0;
}


