#include<stdio.h>
#include<math.h>
#define SIZE 10
int main()
{
	float y[10],x[10];
	int i,n,p,w;
	float a,b;
	printf("Enter the no.of data");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the values of x and y");
		scanf("%f %f",&x[i],&y[i]);
	}
	float sumx=0,sumxx=0,sumy=0,sumxy=0;
	for(i=1;i<=n;i++)
	{
		sumxx=sumxx+x[i]*x[i];
		sumx=sumx+x[i];
		sumxy=sumxy+x[i]*y[i];
		sumy=sumy+y[i];
	}
	b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
	a=(sumy-b*sumx)/n;
	printf("value of a and b are %f and %f",a,b);
	printf("Enter the value of w");
	scanf("%d",&w);
	p=a+b*w;
	printf("Value of p is %d",p);
	return 0;
}
