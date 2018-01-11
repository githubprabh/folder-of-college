#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	printf("enter our choice \n 1.circle \n 2.rectangle \n 3.triangle \n  ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1: float r,carea;
		        printf("enter the radius ");
		        scanf("%f",&r);
		        carea=3.14*r*r;
		        printf("area %f",carea);
		        break;
		case 2: float x,y,rarea;
		        printf("enter the sides ");
		        scanf("%f%f",&x,&y);
		        rarea=x*y;
		        printf("area %f",rarea);
		        break;
		case 3: float i,j,k,s,tarea;
	            printf("enter the three sides");
               	scanf("%f%f%f",&i,&j,&k);
	            s=(i+j+k)/2;
	            tarea=sqrt(s*(s-i)*(s-j)*(s-k));
	            printf("Area %f",tarea);
	            break;
	    default:printf("wrong choice");
	}
	return 0;
}
