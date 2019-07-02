#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double y(double x)
{
return 1600/8*(1 - exp((x-8)/3));
}

double f(double x,double y)
{
return (-3000*8)/(1600-8*y);
}

int main(void)
{
double xn,xn1,xmax;
double yn, yn1;
double y0,x0;
double h;
int n;
x0 = 0.0;
y0 = 0.0;
xn = x0;
yn = y0;
xmax = 5;
h = 0.01;
n =0;

while(xn<xmax)
    {
yn1 = yn + h*f(xn,yn);
xn1 = xn + h;
n++;
yn = yn1;
xn = xn1;
}
printf("O tempo necessario em segundos e de  %f \n ", y(xn));
return 0;
}
