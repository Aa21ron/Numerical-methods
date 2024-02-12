#include<stdio.h>
#include<math.h>
int main()
{
	float x[10],y[10],f[10][10];
	int n,i,j;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter the value of x and y \n");
		scanf("%f %f",&x[i],&f[0][i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			f[i][j]=(f[i-1][j+1]-f[i-1][j])/(x[i+j]-x[j]);
		}
	}
	for(j=0;j<=n;j++)
	{
		printf("%f \t",x[j]);
		{
			for(i=0;i<=n-j;i++)
			{
				printf("%f \t",f[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
