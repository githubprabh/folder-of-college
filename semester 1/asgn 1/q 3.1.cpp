#include<stdio.h>
int main()
{
	int r;
	float a,c;
	printf("enter the radius of circle");
	scanf("%d",&r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("area of circle\n%f          \n  circum of circle \n%f",a,c);
	return 0;
	
}
