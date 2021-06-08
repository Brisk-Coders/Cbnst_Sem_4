#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, root1, root2, det;
    printf("Enter coefficient of x^2, x and constant\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    det = b*b - 4*a*c;
    if (det > 0) {
        root1 = (-b + sqrt(det)) / (2*a);
        root2 = (-b - sqrt(det)) / (2*a);
    } else {
        printf("Imaginary roots");
        return 0;
    }
    printf("%lf %lf", root1, root2);
    return 0;
}
