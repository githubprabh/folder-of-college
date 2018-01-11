#include<stdio.h>
int main()
{                     
    int a=20,b=30,c;
	 
	       //using temporary variables
	printf("numbers are %d %d",a,b);
	c=b;
	b=a;
	a=c;
	printf("\nafter swaping ");
	printf("%d %d",a,b);       
           
     int x=20,y=30;

printf("\nbefore swaping %d %d",x,y);
 //without using temporary variables
 	
	printf("\nafter swaping   %d %d ",y,x);
	
/////////////////////////////////////////////////congo assignment completed ;)/////////////////////////////////////////////////////////////
}
