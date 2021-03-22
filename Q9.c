#include <stdio.h>
#include <math.h>
void main() {
	int x;
	scanf("%d",&x);
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n",x,i,x*i);
	}
}