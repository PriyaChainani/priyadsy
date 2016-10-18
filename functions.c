
#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

double square(double n) {
	n = n * n;
	return(n);
}

double sqrt(double n) {
	double m, x, y;
	y = 0.0001;
	for(x = 0.0; x < n; x = x + y) {
		if((x * x) > n) {
			x = x - y;
			break;
		}
	}
	return x;
       
}

double cube(double n) {
	n = n * n * n;
	return(n);
}			

double cbrtx(double number) {

	int i;
	double cube= 0;
	for(i = 0; i < MAX_NUMBER; i++)  {
		cube = i * i * i;
   		if(cube == number)
     			return i;
   		else if(cube > number)
     			break;
 	}
 	return 0;
}

double fmod(double dividend, double divisor) {
	double questient, remainder;
	int trick;
	if(divisor == 0.0) {
		printf("we cannot divide by zero\n");
		return 0;
	}
	if(divisor < 0.0) { 
		divisor = -divisor;
	}
	if(dividend < 0.0) {
		dividend = -dividend;
	}
	questient = dividend / divisor;
	trick = questient;
	questient = trick;
	remainder = dividend - (questient * divisor);
	if(remainder < 0.0)
		remainder = -remainder;
 	return remainder;
}

double exponential(double x)
{	
	int n = 10;
    	double sum = 1.0; // initialize sum of series
     	int i;
    	for(i = n - 1; i > 0; --i) {
       		 sum = 1 + x * sum / i;
 	}
    	return sum;
}

double hypot(double side1, double side2) {
	double sum = 0, hypotenuse;
	side1 = side1 * side1;
	side2 = side2 * side2;
	sum = side1 + side2;
	hypotenuse = sqrt(sum);
	return hypotenuse;
}


double Pow(double a, double b) {
	if(b < 0)
		return 1 / Pow(a, -b);
	else if(b == 0)
		return 1;
	else if(b == 1)
		return a;
	else
		return a*Pow(a, b-1);
}

double fmax(double a, double b) {
	if(a > b)
		return a;
	else
		return b;
}

double fmin(double a, double b) {
	if(a < b)
		return a;
	else
		return b;
}

double fact(double n) {
	if(n == 0)
		return 1;
	return (n * fact(n-1));
}


div_t1 division(int divident, int divisor) {
	div_t1 temp;
	temp.quot = divident / divisor;
	temp.rem = divident - (temp.quot * divisor);
	return(temp);
}	




