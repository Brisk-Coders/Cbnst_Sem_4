#include<stdio.h>
int main()
{
    int i,j,k,n;
    float matrix[20][20],c,x[10],sum=0.0;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            scanf("%f",&matrix[i][j]);
        }
    }

    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c = matrix[i][j] / matrix[j][j];
                for(k=1; k<=n+1; k++)
                {
                    matrix[i][k] = matrix[i][k] - c * matrix[j][k];
                }
            }
        }
    }
    x[n]=matrix[n][n+1]/matrix[n][n];

    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+matrix[i][j]*x[j];
        }
        x[i]=(matrix[i][n+1]-sum)/matrix[i][i];
    }
    printf("\nThe solution is: \n");
    for(i=1; i<=n; i++)
    {
        printf("\nx%d = %.2f\t",i,x[i]);
    }
}