/*
 * =====================================================================================
 *
 *       Filename:  chivas_homework6.c
 *       	Usage:  ./chivas_homework6.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:04:43 PM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Sherry Masutani (), sherrymasutani@mail.weber.edu
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Funciton Prototypes */
void Usage(void);
void GetRec(double* x, double* y);
void Polar(double x, double y, double *r, double* theta);
void Showit(double radius, double angle);
int AskQuestion(void);

/* Main Function */
int main(int argc, char *argv[])
{
	Usage();
	double r, theta;
	double* px, py, pr, ptheta; //creates a double for the addresses
	
	px = &x; //assigns the doubles to store addresses
	py = &y;
	pr = &r;
	ptheta = &theta;

	GetRec(px, py);
	Polar(px, py, pr, ptheta);
	Showit(pradius, ptheta);
	AskQuestion();
	
	return 0;
}

/* Function Definitions */
void Usage(void)
{
	double x, y;
	if (argc == 3)
	{
		x = atof(argv[1]);
		y = atof(argv[2]);
		printf("The value of x is: %f, and the value of y is:%f\n", x, y);
		exit (1);
	}
	else
	{
	printf("Two floating point parameters are required.\n");
	}
}

void GetRec(double* x, double* y)
{
	scanf("%lf %lf", &x, &y);
	return;
}

void Polar(double x, double y, double *r, double* theta)
{
	r = sqrt (x * x + y * y);
	theta = atan(y/x);
	return;
}
void Showit(double radius, double angle)
{
	radius = r;
	theta = angle;
	printf("The value of radius is: %lf, and the value of angle is %lf.\n",
			radius, angle);
}

int AskQuestion(void)
{
	int answer;
	printf("Do you want to calculate again (Y/N)?\nY = 1, N = 0: ");
	scanf("%d", &answer);

	if (answer != 0 && answer != 1)
	{
		printf("Bad input, try again.\n");
		main();
	}
	else if (answer == 1)
	{
		GetRec(px, py);
		Polar(px, py, pradius, ptheta);
		Showit(pr, ptheta);
	}
	else
	{
		return 0;
	}
}


