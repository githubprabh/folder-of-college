#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	printf("enter an alphabet  ");
	scanf("%c",&c);
	if(c>='a'&&c<='z')
	printf("char is an alphabet");
	else if(c>='A'&&c<='Z')
	printf("char is an alphabet");
    else if(c>=48&&c<=57)
    printf("char is an integer");
    else
    printf("its speial char");
	return 0;
}
