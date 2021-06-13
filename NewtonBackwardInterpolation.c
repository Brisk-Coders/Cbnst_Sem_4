#include<stdio.h>

float u_cal(float u, int n){
    float t = u;
    for(int i=1;i<n;i++)    
        t *= (u+i);
    return t;
}
 int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
 }

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    float y[10][10];
    float x[10];
    printf("Enter the values of x argument:\n");
    for(int i=0;i<n;i++)
        scanf("%f",&x[i]);
    printf("Enter the values of y argument:\n");
    for(int i=0;i<n;i++)
        scanf("%f",&y[i][0]);
    for(int i=1;i<n;i++)
        for(int j=n-1;j>=i;j--)  
            y[j][i] = y[j][i-1] - y[j-1][i-1];
    for(int i=0;i<n;i++){
        printf("%.4f\t",x[i]);
        for(int j=0;j<=i;j++)
            printf("%.4f\t",y[i][j]);
        printf("\n");
    }
    float v;
    printf("Enter the value to interpolate: ");
    scanf("%f",&v);
    float sum=y[n-1][0];
    float u = (v-x[n-1])/(x[1] - x[0]);
    for(int i=1;i<n;i++)    
        sum += (u_cal(u,i)*y[n-1][i])/fact(i);

    printf("val at %f is %.4f",v,sum);
}
