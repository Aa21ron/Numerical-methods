//RK-4's Method - Bhuwan Basnet
#include<stdio.h>
float m1(float x)
{   float y;
	y=1+3*x*x;
	return y;
}

float m2(float x)
{
	float ans;
	ans=1+3*x*x;
	return ans;
}

int main()
{
	float x,y,h,xp;
	int n,i;
	printf("BHUWAN BASNET\n");
	printf("Enter the stpes:");
	scanf("%f",&h);
	xp=2.5;
	x=1;
	y=2;
	n=(xp-x)/h;
	printf("n=%d",n);
	for(i=1;i<=n;i++)
	{
		y=y+(m1(x)+m1(x+h)+2*m1(x+h/2)+2*m1(x+h/2))/6*h;
		x=x+h;
		printf("\nThe value of x and y is %f and %f",x,y);
	}
//	printf("The value of x and y is %f and %f",x,y);
}