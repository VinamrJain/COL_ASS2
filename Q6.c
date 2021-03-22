#include <stdio.h>
#include <math.h>
void main() {
	int n;
	scanf("%d",&n);
	if (n>=0)
	{
		int x=1;
		int y=0;
		for (int i = 1; i <=(n+1)/2 ; i++)
		{
			x +=y;
			y +=x;
		}
		if (n%2==0)
		{
			printf("%d",y);
		}
		else
		{
			printf("%d",x);
		}
	}
	else
	{
		int x=1;
		int y=0;
		for (int i = 1; i <=(-n+1)/2 ; i++)
		{
			x -=y;
			y -=x;
		}
		if (n%2==0)
		{
			printf("%d",y);
		}
		else
		{
			printf("%d",x);
		}
	}
	
	
	
}




/*
for n>=0
1 1 2 3 5 8 13
i1 1 1 //1 2
i2 2 3 //3 4
i3 5 8 //5 6
i4 13 21 //7 8

for n<0

1 0 1 -1 2 -3 5 -8
i1 1 -1 //-1 -2
i2 2 -3 //-3 -4
*/