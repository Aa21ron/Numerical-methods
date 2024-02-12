#include<stdio.h>
#define SIZE 10

int main()
{
    int n, i;
    float x[SIZE], y[SIZE], sumX=0, sumXX=0, sumY=0, sumXY=0, a, b,xx,xy;
    printf("Aakash Shahi\n");
    printf("Enter the no. of data\n");
    scanf("%d", &n);
    printf("Enter the value of x and y\n");
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f", &x[i]);
        printf("y[%d]=",i);
        scanf("%f", &y[i]);
    }
    for(i=1;i<=n;i++)
    {
        sumX = sumX + x[i];
        sumXX = sumXX + x[i]*x[i];
        sumY = sumY + y[i];
        sumXY = sumXY + x[i]*y[i];
    }
    b = (n*sumXY-sumX*sumY)/(n*sumXX-sumX*sumX);
    a = (sumY - b*sumX)/n;
    printf("\nValues are: a=%f and b = %f\n",a,b);
    printf("The least square equation is %f +%fx\n",a,b);
    printf("enter the value of x\n");
    scanf("%f",&xx);
    xy=a+b*xx;
    printf("\nthe value of y for %f is %f",xx,xy);
    return(0);
}