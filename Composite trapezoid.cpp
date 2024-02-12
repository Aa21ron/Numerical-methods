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
	float I,h,a,b,sum=0;
	int i,n;
	printf("BHUWAN BASNET-078BEI16\n");
	printf("Enter the lower and upper limit:\n");
	scanf("%f %f",&a,&b);
	printf("\nEnter the no.of strip");
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=1;i<=n-1;i++)
	{
		sum=sum+func(a+i*h);
	}
	I=h/2*(func(a)+func(b)+2*sum);
	printf("The value of integral is %f",I);
	return 0;
}
