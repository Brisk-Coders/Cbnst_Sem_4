#include<stdio.h>
#include <math.h>

//This code whill find tye integral of sq root of X from the interval 0-8.

float f(float x)
{
    return sqrt(x);
}

int main()
{
    float a, b, n;
    printf("Enter the value for A, B and N : ");
    scanf("%f%f%f", &a, &b, &n);

    float h = (b - a)/n;

    float integral = f(a) + f(b);

    float elem = a+h;

    for(int i = 1; elem!=b; i++)
    {
        if(i % 3 == 0)
        {
            integral += 2 * f(elem);
        }
        else
        {
            integral += 3 * f(elem);
        }
        elem += h;
    }
    integral *= (3*h/8);
    printf("The value of the integral is : %.2f", integral);
}