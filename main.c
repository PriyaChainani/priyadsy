#include "functions.h"
#include<stdlib.h>
#include<stdio.h>

void printmenu() {
	printf("\n############################### MENU #####################################\n"


					"\t1. square function\n"   
					"\t2. square root \n"
                			"\t3. cube function\n"
	        			"\t4. cube root function\n"
					"\t5. Mod function\n"
       	        			"\t6. Exponential function\n"
					"\t7. Hypotenuse function\n"     
                			"\t8. power function\n"
					"\t9. Max function\n"
					"\t10. Min function\n"
					"\t11. factorial function\n"
					"\t12. div_t1 function\n"
					"\t13. exit()\n"

		"#############################################################################\n");
}

void wait() {
	printf("Press any key to continue:");
	getchar();
	getchar();
}

int main()
{
	int choice,  res,  no1, no2;
	double n, m, s1, s2, res1, ans;
	double n1 = 0,result = 0;
	div_t1 temp;

					for(choice=1;choice<=13;choice++)
{
					printmenu();
					printf("Enter your choice\n");
					scanf("%d" ,&choice);
					switch(choice) {

						case 1:
							printf(".....square() calculates the square of a number.....\n");	
							printf("Enter number to find square of entered number : \n");
							scanf("%lf", &n);
							ans = square(n);
							printf("The square of %lf is %lf\n",n, ans);
							wait();
							break;

						case 2:
							printf(".....sqrt() function calculates the square root of a number.....\n");	
							printf("Enter your number : \n");
							scanf("%lf", &n);
							m = sqrt(n); 
 							if(m == 0) {
 	
 								 printf("You have entered a negative number\n");
						  		 wait();
 								 break;			
							} 
							printf("square root is %.3lf\n", m);
							wait();
							break;
						
						case 3:
							printf(".....cube() function calculates cube of a number.....\n");	
							printf("Enter number to find cube of a entered number\n");
							scanf("%lf", &n);
							ans = cube(n);
							printf("The cube of %lf is %lf\n",n, ans);
							wait();
							break;
						

						case 4:	printf(".....cbrt() calculates the cube root of number i.e. cbrt(8)= 2.....\n"); 
							printf("enter the number to find the cube root\n");
 							scanf("%lf",&n1);
 							if(n1 < 0) {
 	
 								 printf("enter only +ve integer value\n");
						  		 wait();
 								 break;
 							}
 							result = cbrtx(n1); 
 							if(result)
 								 printf("cube root of %lf is %lf\n",n1,result);
 								else {
								printf("not a proper value for finding the cube root\n");
								wait();
 								break;
							}	
							
							wait();
							break;

						case 5:
							printf(".....mod() calculates remainder when one number is divided by 2nd number....\n"); 
							printf("enter the number to be divided :\t\n");
							scanf("%lf",&s1);
							printf("enter the divisor:\t\n");
							scanf("%lf",&s2);
							ans = fmod(s1, s2); 
							printf("remainder is : %lf\n", ans);
							wait();
							break;

						case 6:
							printf(".....expoential() function calculates expoential value of a number i.e. e^x.....\n");
							printf("Enter the value of x\n");
    							scanf("%lf", &n);
   						        printf("e^x = %lf\n", exponential(n)); 
							wait();
							break;

						case 7:
							printf(".....hypot() calculates the value of hypotenuse when two sides are given.....\n");
							printf("Enter sides: \n");
							scanf ("%lf %lf",&s1,&s2);
							printf("Hypotenus of %f %f is: %f\n", s1, s2,hypot(s1,s2)); 				
							wait();
							break;

						case 8:
							printf(".....pow() function calculates the x^y power.....\n");
							printf("Enter the number and the power\n");
							scanf("%lf%lf", &s1, &s2);
							res1 = Pow(s1, s2); 
							printf("The %lf^%lf is %lf\n", s1, s2, res1);
							wait();
							break;
						

						case 9:
							printf(".....fmax() function finds maximum between two numbers.....\n");	
							printf("Enter two numbers to find maximum number\n");	
							scanf("%lf%lf", &s1, &s2);
							res1 = fmax(s1,s2);
							printf("The max number is %f\n",res1);
							wait();
							break;

						case 10:
							printf(".....fmin() function finds minimum between two numbers.....\n");	
							printf("Enter two numbers to find minimum number\n");	
							scanf("%lf%lf", &s1, &s2);
							res1 = fmin(s1,s2);
							printf("The min number is %f\n",res1);
							wait();
							break;
						

						case 11:
							printf(".....fact() function returns factorial of a number....\n");	
							printf("Enter number to find factorial\n");
							scanf("%lf", &n);
							ans = fact(n);
							printf("The factorial of %lf is %lf\n", n, ans);
							wait();
							break;

						case 12:
							printf(".....division() function gives quotient and remainder after division.....\n");
							printf("Enter divident\n");
							scanf("%d", &no1);
							printf("Enter divisor\n");
							scanf("%d", &no2);
							temp = division(no1, no2);
							printf("quotient=%d\tremainder=%d\n", temp.quot, temp.rem);
							wait();
							break;			

						case 13:
							exit(0);
							break;
						default:
							printf(".....wrong choice.....\n");
						}					
						} 	
}

