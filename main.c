
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
#include<fcntl.h>
#include<ctype.h>
#include<error.h>
#include<string.h>
#include<stdlib.h>
#include "functions.h"
int main(){
	char line[50];
	int id,res1,i1,i2,eot;
	double input, input1, exot, result;
	char *tok = NULL, *fun;
	char *str, *str_exot;
	str = (char *)malloc(sizeof(char));
	str_exot = (char *)malloc(sizeof(char));
	FILE *fp;
	fp = fopen("testcase.txt", "r");
	if(fp == NULL){
		perror("Error");
	}
	else{
		while(fgets(line, sizeof(line), fp) != NULL){
			tok = strtok(line, " ");
			if(tok != NULL){
				id = atoi(tok);
				printf("\nID : %d", id);
				fun = strtok(NULL, " ");
				printf("\tFunction : %s", fun);
			}
			switch(id){
				case 0:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = square(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 1:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = sqrt(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 2:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = cube(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 3:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = cbrtx(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 4:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput1 %lf", input);
					tok = strtok(NULL, " ");
					input1 = atof(tok);
					printf("\tinput2 %lf", input1);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = fmod(input,input1);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				
				case 6:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput1 %lf", input);
					tok = strtok(NULL, " ");
					input1 = atof(tok);
					printf("\tinput2 %lf", input1);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = hypot(input,input1);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 7:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput1 %lf", input);
					tok = strtok(NULL, " ");
					input1 = atof(tok);
					printf("\tinput2 %lf", input1);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = Pow(input,input1);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 8:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput1 %lf", input);
					tok = strtok(NULL, " ");
					input1 = atof(tok);
					printf("\tinput2 %lf", input1);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = fmax(input,input1);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 9:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput1 %lf", input);
					tok = strtok(NULL, " ");
					input1 = atof(tok);
					printf("\tinput2 %lf", input1);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = fmin(input,input1);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 10:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = fact(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 12:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = ceilx(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 13:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = floorx(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 14:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atof(tok);
					printf("\texot %lf", exot);
					result = dec_bin(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				/*case 15:
					tok = strtok(NULL, "\"");
					str = tok;
					printf("\n\tstr %s", str);
					hex_binary(str);
					tok = strtok(NULL, "\"");
					str_exot = tok;
						printf("\n\tstr %s", str);
						printf("\n\tstr_exot %s", str_exot);
					if(strcmp(str_exot, str) == 0)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break; */
				case 16:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atoi(tok);
					printf("\texot %lf", exot);
					result = abs(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 17:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atoi(tok);
					printf("\texot %lf", exot);
					result = octal_decimal(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 18:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atoi(tok);
					printf("\texot %lf", exot);
					result = decimal_octal(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 19:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atoi(tok);
					printf("\texot %lf", exot);
					result = binary_octal(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
				case 20:
					tok = strtok(NULL, " ");
					input = atof(tok);
					printf("\tinput %lf", input);
					tok = strtok(NULL, " ");
					exot = atoi(tok);
					printf("\texot %lf", exot);
					result = octal_binary(input);
					printf("\tresult %lf", result);
					if(result == exot)
						printf("\t PASS\n");
					else
						printf("\t FAIL\n");
					break;
			


			}
		}
	}
}
