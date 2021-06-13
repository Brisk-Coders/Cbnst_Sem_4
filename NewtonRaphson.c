#include <stdio.h>
#include <math.h>
#define f(x) (3*x - sin(x) - 1)
#define g(x) (3 - cos(x))

int main()
{
    float x0, e, x;
    int i, c = 0;
    printf("Enter Initial guess and maximum tolerable error and maximum iterations\n"); // 1 .0001 10
    scanf("%f%f%d", &x0, &e, &i);
    if(g(x0) == 0) {
        printf("Error");
        return 0;
    }
    do {
        x = x0 - f(x0)/g(x0);
        x0 = x;
        if(++c > i) {
            printf("Not convergent");
            return 0;
        }
    }while(fabs(f(x)) > e);
    printf("%f", x); // 0.490296
    return 0;
}
