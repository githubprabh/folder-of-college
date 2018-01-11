#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter 3 no.");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	printf("%d is smallest (a)",a);
	else if(b<c&&b<a)
	printf("%d is smallest (b)",b);
	else if(c<a&&c<b)
	printf("%d is smallest (c)",c);
	return 0;
}
