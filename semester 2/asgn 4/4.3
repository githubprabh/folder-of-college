#include<stdio.h>
#include<stdlib.h>
typedef struct create1{
	int data;
	struct create1 *link;
}node1;
node1 *head1=NULL;

typedef struct create2{
	int data;
	struct create2 *link;
}node2;
node2 *head2=NULL; 

typedef struct create3{
	int data;
	struct create3 *link;
}node3;
node3 *head3=NULL;

int n1(int temp1)
{
	
	node1 *x , *x1;
	if(head1==NULL)
	{
	    x1=head1;x=head1;
		x=(node1*)malloc(sizeof(node1));
		x1=head1=x;
		x->link=NULL;
//		x1->link=x->link;
		
		x1->data=x->data=temp1;
		
//		printf("%d",x->data);// numbers reversed
	}
	else
	{
		
		x=(node1*)malloc(sizeof(node1));
		x1->link=x;
		x->data=temp1;
		x->link=NULL;
		x1=x;	
//		printf("%d",x->data);	// num reversed
	}
}

void n2(int temp2)
{
	
	node2 *y , *y1;
	if(head2==NULL)
	{
	    y=head2;
		y=(node2*)malloc(sizeof(node2));
		y1=head2=y; y->link=NULL;
		y1->link=y->link;
		
		y1->data=y->data=temp2;
		
//		printf("\n%d",y->data);
	}
	else
	{
		
		y=(node2*)malloc(sizeof(node2));
		y1->link=y;
		y->link=NULL;
		y->data=temp2;	
		y1=y;
//		printf("%d",y->data);	
	}
}

int add()
{
	node1 *x , *x1;   x = x1 = head1 ;
	node2 *y , *y1;   y = y1 = head2 ;
	node3 *z , *z1;   z = z1 = head3 ;
	int temp;
	again1:
	temp = x->data + y->data;
	// of reverse result 
	z=(node3*)malloc(sizeof(node3));
	
	if(head3 == NULL)
	{
		z->data=temp % 10;
		z1=z;
		head3=z;
		z->link=NULL;
	}
	else
	{
		z->data=temp % 10;
		z1->link=z;
		z1=z;
		z->link=NULL;
	}
//	printf("\n%d %d %d %d %d %d %d",head3,z->data,z1,z1->data,z1->link,z,z->link);
	// climax carry forward 
	if(temp>9)
	{
		// carry carry 
		// if carry if there then for sure 
		// x->link is not NULL
		if(x->link!=NULL)
		{
			if(y->link!=NULL)  
			{
				x=x->link;
				x->data=x->data+1;
				y=y->link;
				goto again1;
			}
			else
			{
				x=x->link;
				x->data=x->data+1;
				y->data=0;
				goto again1;
			}
		}
		else
		{
			if(y->link!=NULL)
            {
            	x->data=0;
            	y=y->link;
            	y->data=y->data+1;
            	goto again1;
			}
			else
			{
				// create new x node for carry
				x=(node1*)malloc(sizeof(node1));
				x->data=1;
				x->link=NULL;
				x1=x;
				y->data=0;
				goto again1;
			}
		}
	}
	if(temp<=9)
	{
		if(x->link!=NULL)
		{
			if(y->link!=NULL) // both have next digit
			{
				x=x->link;
				y=y->link;
				goto again1;
			}
			else  // only  x not y has next digit
			{
				x=x->link;
				y->data=0;
				goto again1;
			}
		}
		else
		{
			if(y->link!=NULL) // y has next but not x
			{
				y=y->link;
				x->data=0;
				goto again1;
			}
			else  // both x n y have none
			{
				goto exit;
			}
		}
	}
	
	exit:{;}
	node3 *a; a=head3;
//	if(a->link!=NULL)
//	printf("%d",a->data);

}
int a[100] ;int  top=-1;

int result()
{
	
	node3 *z; z=head3;
	if(z->link!=NULL)
	{
//		printf("\n%d %d",head3,z->data);
	}
	again2:
	if(z->link!=NULL)
	{
//		printf("\nc");
		top=top+1;
		a[top]=z->data;
		z=z->link;
		goto again2;
	}
	top=top+1;
	a[top]=z->data;printf("\nSUM ---->>  ");
	for(int i=top; i>-1;i--)
	printf("%d",a[i]);
}


main()
{
	int num1 , temp1 , num2 , temp2 ;
	printf("enter num 1 :\t");
	scanf("%d",&num1);
	printf("enter num 2 :\t");
	scanf("%d",&num2);
	// reverse num 1
	while(num1!=0){
	temp1=num1%10;
	n1(temp1);
	num1=num1/10;
	}
	// reverse num 2
	while(num2!=0)
	{	
	temp2=num2%10;
	n2(temp2);
	num2=num2/10;
	}
	
	add();
	result();
	
}
