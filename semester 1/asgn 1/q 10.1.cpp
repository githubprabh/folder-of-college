#include<stdio.h>
int main()
{
	float u,a,v,t;
	printf("entre the velocity accleration and time respectively ");
	scanf("%f%f%f",&u,&a,&t);
	v=u+a*t;
	printf(" final velocity comes out to be %f",v);
	
	return 0;
}
