#include <stdio.h>
#include <math.h>
void main() {
	int y;
	scanf("%d",&y);
	if (y>0)
	{
		if (y%4==0)
		{
			if (y%100==0)
			{
				if (y%400==0)
				{
					printf("Leap year");
				}
				else
				{
					printf("Not a Leap Year");
				}
			}
			else
			{
				printf("Leap year");
			}
		}
		else
		{
			printf("Not a Leap year");
		}
	}
	else
	{
		printf("Enter Valid year");
	}
	
}