#include<stdio.h>
#include <math.h>

//This code whill find tye integral of sq root of X from the interval 0-8.

float f(float x)
{
    return (3*x - x*x);
}

int main()
{
    float a, b, n;
    printf("Enter the value for A, B and N : \n");
    scanf("%f%f%f", &a, &b, &n);

    float h = (b - a)/n;

    float integral = f(a) + f(b);

    float elem = a+h;

    for(int i = 1; elem<=b; i++)
    {
        printf("ELEM : %f\n", elem);
        integral += 2 * f(elem);
        elem += h;
    }
    integral *= (h/2);
    printf("The value of the integral is : %.2f", integral);
}