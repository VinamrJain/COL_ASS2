#include <stdio.h>
#include <math.h>
void main() {
	int x,n;
	scanf("%d%d",&x,&n);
	if (n>0)
	{ 
	   int power = 1;
		for(int i=1;i<=n;i++)
		{
			power *= x;
		}
		printf("%d",power);
	}
	else if(n==0)
	{
		if(x==0)
		{
			printf("Indeterminate");
		}
		else
		{
			printf("%d",1);
		}
	}
	else
	{
		if(x==0)
		{
			printf("Infinite");
		}
		else
		{
		   float power = 1;
		    for(int i=1;i<=-1*n;i++)
		    {
			power *= (float)1/x;
		    }
		    printf("%f",power);
		}
	}
	
}