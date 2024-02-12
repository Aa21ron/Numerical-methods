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
	float I,h,a,b,sum1=0,sum2=0;
	int i,n;
	printf("BHUWAN BASNET-078BEI16\n");
	printf("Enter the lower and upper limit:\n");
	scanf("%f %f",&a,&b);
	printf("Enter the no.of strips");
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=1;i<=n-1;i++)
	{
		if(i%2==0)
		{
			sum1=sum1+func(a+i*h);
		}
		else
		{
			sum2=sum2+func(a+i*h);
		}
	}
	I=h/3*(func(a)+func(b)+4*sum2+2*sum1);
	printf("The value of integral is %f",I);
	return 0;
}
