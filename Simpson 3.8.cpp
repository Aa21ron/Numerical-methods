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
	h=(b-a)/3;
	I=(3*h/8)*(func(a)+func(b)+3*func(a+h)+3*func(a+2*h));
	printf("The value of integral is %f",I);
	return 0;
}
