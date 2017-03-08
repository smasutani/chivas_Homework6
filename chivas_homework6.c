#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void Usage(void);
void GetRec(double* x, double* y);
void Polar(double x, double y, double *r, double* theta);
void Showit(double radius, double angle);
int AskQuestion(void);

int main(int argc, char *argv[])
{
        double x,y,r,theta;
        if(argc == 3)
        {
                x = atof(argv[1]);
                y = atof(argv[2]);

                       if(x && (y || y==0))
                        {
                                Polar(x,y,&r,&theta);
                                Showit(r, theta);
                                AskQuestion();
                        }

                        else
                        {
                        Usage();
                        }
        }
        else
        {
        Usage();
        }



        return 0;
}


void Usage(void)
{
        printf("Error, both paramaters are required.\n Must be a floating point\n");
}

void GetRec(double* x, double* y)
{
        printf("Enter the x coordinate: ");
        scanf("%lf", x);
        printf("Enter the y coordinate: ");
        scanf("%lf", y);
        return;
}

void Polar(double x, double y, double *r, double* theta)
{
        *r = sqrt (x * x + y * y);
        *theta =(180/3.14159)* atan(y/x);
        return;
}
void Showit(double radius, double angle)
{
        printf("The distance from the origin: %lf\nThe value of angle is %lf.\n",radius, angle);
        return;
}

int AskQuestion(void)
{
        int answer;
        double x, y, r, theta;
                printf("Do you want to calculate again (Y/N)?\nY = 1, N = 0: ");
                scanf("%d", &answer);

        if (answer != 1 && answer !=0)
        {
                printf("Bad Input. Try again.\n");
                AskQuestion();
        }
        else if (answer ==1)
        {
                GetRec(&x,&y);

                if(x && (y||y == 0))
                {
                        Polar(x,y,&r,&theta);
                        Showit(r, theta);
                        AskQuestion();
                        }

                else
                {
                        Usage();
                }
        }
        else if (answer ==0)
        {
                return 0;
        }
        else
        {
                printf("Bad Input. Try again.\n");
                AskQuestion();
        }

return 0;
}
~                                                                                                                                                                                                                                                                                                                                                                                                                            
~                                                                                                                                                                                                                                                                                                                                                                                                                            
~                  
