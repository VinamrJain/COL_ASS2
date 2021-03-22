#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void main() {
	double n;
	bool prime = true;
	scanf("%lf",&n);
	if (n>0 && floor(n)==n)
	{
		for(int i=2; i<sqrt(n);i++)
        {
			if((int)n%i==0)
			{   prime = false;
				printf("Not a Prime No.");
				break;
			}
		}
    if (prime == true)
	{
		printf("Is a Prime No.");
	}
	}
	else
	{
		printf("Enter a Valid No.");
	}
}