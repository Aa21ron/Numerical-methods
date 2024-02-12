#include<stdio.h>
float func(float a)
{
	float b;
	b=1+a*a*a;
	printf("%f \n",b);
	return b;
}
int main()
{
	float I,h,a,b,i,sum;
	printf("BHUWAN BASNET-078BEI16\n");
	printf("Enter the lower and upper limit:\n");
	scanf("%f %f",&a,&b);
	h=(b-a)/2;
	I=h/3*(func(a)+func(b)+4*func((a+b)/2));
	printf("The value of integral is %f",I);
	return 0;
}
