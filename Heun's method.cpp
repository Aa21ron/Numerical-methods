//Heun's Method - Bhuwan Basnet
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
	printf("BHUWAN BASNET\n");
	int n,i;
	printf("Enter the stpes:");
	scanf("%f",&h);
	xp=2.5;
	x=1;
	y=2;
	n=(xp-x)/h;
	printf("n=%d",n);
	for(i=1;i<=n;i++)
	{
		y=y+h/2*(m1(x)+m2(x+h));
		x=x+h;
		printf("\nThe value of x and y is %f and %f",x,y);
	}
//	printf("The value of x and y is %f and %f",x,y);
}