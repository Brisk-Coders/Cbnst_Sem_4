#include<stdio.h> 
#include<math.h> 
#define f(x) (cos(x) - x*exp(x))

int main(){
    float x0, x1, x, f_x, e;
    printf("Enter the Value of [x0, x1] and max error \n");
    scanf("%f%f%f", &x0, &x1, &e);
    int count = 0;
    if (f(x0) * f(x1)>0){ 
        printf("Invalid input");
        return 0;
    }
    do {
        x = (x0*f(x1)-x1*f(x0))/(f(x1)-f(x0));
        f_x = f(x);
        printf("\n i=%d x0=%f x1=%f x2=%f f(x2)=%f " , ++count, x0, x1, x, f_x);
        if(f(x0) * f_x < 0) {
            x1 = x;
        } else if(f(x0) * f_x > 0) {
            x0 = x;
        } else {
            printf("\n\n\n approximate root= %.4f \n\n", x);
            return 0;
        }
    }
    while(fabs(f(x))>e);
    printf("\n\n\n approximate root= %.4f \n\n", x);
}
