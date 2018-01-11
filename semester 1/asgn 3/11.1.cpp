#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float d,e,f;
	printf("enter cofficents");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if(d>0)
	{
	  e=(-b+sqrt(d))/(2*a);
	  f=(-b-sqrt(d))/(2*a);
	  printf("roots are %f and %f",e,f);
    }
    else if(d==0)
    {
       e=-b/(2*a);
	   printf("roots are %f and %f",e,e);	
	}
	else
	printf("roots are imaginary no real roots");
	return 0;

	
}
