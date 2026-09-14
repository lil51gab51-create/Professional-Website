#include <iostream>
#include <Math.h>
#include <stdio.h>


int main () {
	
	int w;
	int x1;
	int y;
	int z;
	
	double angle;
	double x2;
	
	w=3;
	x1=-1;
	x2=-1.3;
	y=4;
	z=4;
	angle = 60;
	
	double	PI = 3.14;
	
	double a = abs(x1);
	double b = abs(x2);
	double c = pow(w,y);
	double d = pow(pow(cos(angle),2),3);
	double e = abs(pow(e,-z));
	double f = log(z);
	
	printf("a = %.1f\n b = %.1f\n c = %.1f\n d = %.1f\n e = %.1f\n f = %.1f\n", a, b, c, d, e, f);
	
	return 0;
}
