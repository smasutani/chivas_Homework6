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

void Usage(void);
void GetRec(double* x, double* y);
void Polar(double x, double y, double *r, double* theta);
void Showit(double radius, double angle);
int AskQuestion(void);

int main()
{
	GetRec(x, y);
	Polar(x, y, &r, &theta);
	Showit(radius, angle);
	AskQuestion(void);
	return 0;
}


void Usage(void)
{

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
	
}







