#include <stdio.h>
#include <math.h>
void main() {
	int n;
	scanf("%d",&n);
	if (n>0)
	{
		int x=1;
		for (int i = 1; i <= n; i++)
		{
			x *=i;
		}
		printf("%d",x);
	}
	else if (n==0)
	{
		printf("%d",1);
	}
	else
	{
		printf("Cannot Calculate factorial of a negative no.");
	}
	
}