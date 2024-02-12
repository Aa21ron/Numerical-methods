//Euler's Method - Bhuwan Basnet
#include<stdio.h>
float func(float x)
{   float y;
	y=1+3*x*x;
	return y;
}

int main()
{
	float x,y,h,xp;
	int n,i;
	printf("BHUWAN BASNET\n");
	printf("Enter the steps:");
	scanf("%f",&h);
	xp=2.5;
	x=1;
	y=2;
	n=(xp-x)/h;
	printf("n=%d",n);
	for(i=1;i<=n;i++)
	{
		y=y+h*func(x);
		x=x+h;
		printf("\nThe value of x and y is %f and %f",x,y);
	}
//	printf("The value of x and y is %f and %f",x,y);
}