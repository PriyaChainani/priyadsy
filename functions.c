
/*****************************************************************************
 * Copyright (C) Priya S.C. priya25c@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
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

// absolute value of an interger
int abs(int n) {
	if(n < 0)
		return -n;
	else
		return n;
}

// ceil() function
double ceilx(double x) {
	double y;
	y = (int)x;
	if(y < x)  {
        	x = x + 1;
               y = (int)x;
       }
	return y;
}

// floor() function
double floorx(double x) {
	double y;
	y = (int)x;
	if(y > x)  {
        	x = x - 1;
               y = (int)x;
       }
	return y;
}

//decimal to binary conversion
double dec_bin(double fradecimal) {
	double frabinary, bfractional = 0.0, dfractional, frafactor = 0.1;
	long int dIntegral, bIntegral = 0;
	long int intfactor = 1, rem, temp, i;

	dIntegral = fradecimal;
	dfractional = fradecimal - dIntegral;
	
	while(dIntegral != 0) {
		rem = dIntegral % 2;
		bIntegral = bIntegral + rem * intfactor;
		dIntegral = dIntegral / 2;
		intfactor = intfactor * 10;
	}
	
	for(i = 1; i<= 6; i++) {
		dfractional = dfractional * 2;
		temp = dfractional;
		bfractional = bfractional + frafactor * temp;
		if(temp == 1)
			dfractional = dfractional -temp;	
		frafactor = frafactor / 10;
	}
	frabinary = bIntegral + bfractional;
	return frabinary;
}
/* Function to convert decimal to octal */
int decimal_octal(int n) {

	int rem, i = 1, octal = 0;
	while (n != 0) {
		rem = n % 8;
	        n /= 8;
	        octal += rem * i;
	        i *= 10;
	}
    	return octal;
}

 /* Function to convert octal to decimal */
int octal_decimal(int n) {
	int decimal = 0, i = 0, rem;
    	while (n != 0) {
		rem = n % 10;
        	n /= 10;
        	decimal += rem * Pow(8,i);
        	++i;
    	}
    	return decimal;
}

/* Function to convert binary to octal. */
int binary_octal(int n) {  
	int octal = 0, decimal = 0, i = 0;
    	while(n != 0) {
    		decimal += (n % 10) * Pow(2,i);
        	++i;
        	n /= 10;
   	 }
/*At this point, the decimal variable contains corresponding decimal value of binary number. */
	i = 1;
    	while (decimal != 0) {
    
        	octal += (decimal % 8) * i;
        	decimal /= 8;
        	i *= 10;
    	}
    	return octal;
}

/* Function to convert octal to binary.*/
int octal_binary(int n) {  

	int decimal = 0, binary = 0, i = 0;
    	while (n != 0) {
		decimal += (n % 10) * Pow(8,i);
	        ++i;
        	n /= 10;
    	}
/* At this point, the decimal variable contains corresponding decimal value of that octal number. */
    	i = 1;
    	while(decimal != 0) {
   
        	binary += (decimal % 2) * i;
        	decimal /= 2;
        	i *= 10;
    	}
    	return binary;
}

//binary to hexadecimal conversion
long int binary_hex(long int binaryval) {
	long int  hexadecimalval = 0, i = 1, remainder;
	while (binaryval != 0) {
   
        	remainder = binaryval % 10;
        	hexadecimalval = hexadecimalval + remainder * i;
        	i = i * 2;
        	binaryval = binaryval / 10;
    	}
	return hexadecimalval;

}



