#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x,float y)
{
	return((y-x)/(y+x));
}
void main()
{
    float h,x0,y0,xn,n,i,k1,k2,k3,k4;
    printf("ENTER THE VALUE OF x0, y0 ,x ,h");
    scanf("%f%f%f%f",&x0,&y0,&xn,&h);
    n=(xn-x0)/h;

    for(i=1;i<=xn;i++)
    {
        k1 = h*f(x0,y0);
        k2 = h*f(x0+h/2 , y0+k1/2);
        k3 = h*f(x0+h/2 , y0+k2/2);
        k4 = h*f(x0+h , y0+k3);

        y0=y0+(1.0/6.0)*(k1+2*k2+2*k3+k4);
        x0=x0+h;
    }
    printf("The Value of y is =%f\n", y0);
    printf("The Value of x is =%f\n", x0);
}