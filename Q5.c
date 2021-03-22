#include <stdio.h>
#include <math.h>
void main() {
	float r,l,w,b,h;
	char s;
	scanf("%c",&s);
	switch (s)
	{
	case 'c':
		scanf("%f",&r);
        if (r>0)
		{
			printf("%f",M_PI*r*r);
		}
		else
		{
			printf("Invalid entry(s)");
		}
		break;
	case 'r':
		scanf("%f%f",&l,&w);
        if (l>0 && w>0)
		{
			printf("%f",l*w);
		}
		else
		{
			printf("Invalid entry(s)");
		}
		break;
	case 't':
		scanf("%f%f",&b,&h);
        if (b>0 && h>0)
		{
			printf("%f",b*h/2);
		}
		else
		{
			printf("Invalid entry");
		}
		break; 
	default:
	printf("Enter one of 'c'/'r'/'t'");
		break;
	}
}