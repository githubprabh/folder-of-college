#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("Enter the year");
	scanf("%d",&a);
	if(a%4==0)
	printf("no. of days=366");
	else
	printf("no.of days=365");
	return 0;
	
}
