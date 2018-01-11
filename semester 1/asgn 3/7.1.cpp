#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	printf("enter an alphabet  ");
	scanf("%c",&c);
	if(c>='a'&&c<='z')
	c=c-32;
	else if(c>='A'&&c<='Z')
	c=c+32;
	printf("changed char = %c",c);
	return 0;
}
