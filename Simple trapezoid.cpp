#include<stdio.h>
float func(int a)
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
	printf("Enter the lower and upper limit:");
	scanf("%f %f",&a,&b);
	h=b-a;
	I=h/2*(func(a)+func(b));
	printf("The value of integral is %f",I);
	return 0;
}
