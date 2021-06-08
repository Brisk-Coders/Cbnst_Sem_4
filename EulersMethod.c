#include <stdio.h>
#include <math.h>
#define f(x, y) (y*log(y)*pow(x, -1))

int main()
{   
    double x0, y0, h, xn;
    printf("Enter Initial x and y, h and final y term\n");
    scanf("%lf%lf%lf%lf", &x0, &y0, &h, &xn);
    int c = 0;
    while (x0 < xn){
        y0 = y0 + h * f(x0, y0);
        x0 += h;
        ++c;
        printf("iteration: %d, x: %lf, y: %lf\n", c, x0, y0);
    }
    printf("Value of Yn: %lf", y0);
    return 0;
}
