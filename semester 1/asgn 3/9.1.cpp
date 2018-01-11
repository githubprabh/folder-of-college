#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	printf("enter a vowel  ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	printf("lowercase vowel");
	else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	printf("uppercase vowel");
	else
	printf("not a vowel");
	return 0;
}
