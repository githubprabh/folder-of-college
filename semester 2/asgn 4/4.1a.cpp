#include<stdio.h>     // oooolll set
#include<malloc.h>    //
#include<math.h>
typedef struct myNode
{
	int data;
	struct myNode *link;
	int coeff;
}node;
  node *head=NULL;
typedef struct yournode
{
	int data;
	struct yournode *link;
}noddy;   

void create()
{
	 node *p, *q;
	int s,t;
	do{
		p=(node*)malloc(sizeof(node));
		if(head==NULL)
		{
			again:
				printf("\nenter power\t");
			    scanf("%d",&p->data);
			if(p->data>=0)           // power should be greater than zero
			{
							
			printf("enter coeff\t");
			scanf("%d",&p->coeff);
			p->link=NULL;
			head=p;
			q=p;
			}
			else
			{
				
				printf("\n\t***not valid power***\n");
				goto again;
			}
		}
		else
		{
			again2:
			printf("enter power\t");
			scanf("%d",&p->data);             
			if(p->data>=0)               // power should be greater than zero                  
			{
				printf("enter coeff\t");
			    scanf("%d",&p->coeff);          
			    q->link=p;
			    p->link=NULL;
			    q=p;
			}
			else
			{
				printf("\n\t***not valid power***\n");
				goto again2;
			}
		}
		printf("create another node?, press 1\t");
		scanf("%d",&s);
	}while(s==1);
}
void display()
{
	node *p;int  v=0 ; int x ; 
	p=head;
	printf("entre value of x\t");
	scanf("%d",&x);
	if( x<0 )
	printf("not valid input come some other day");
	else
	{
	if(p==NULL)
	printf("list is empty");
	else
	{
		printf("elements in the list are\n\n\t");
		while(p->link!=NULL)
		{
			printf("%d*x^%d  +  ",p->coeff,p->data);
			v=p->coeff*(pow( x , p->data))+v;
			p=p->link;
		}
		v=p->coeff*(pow( x , p->data))+v;
		printf("%d*x^%d",p->coeff,p->data);
	}
	    printf("\n\n\tvalue of exp is ---->>>>   %d\n\n",v);
	    printf("\tthanks visit again");
	}
}
main()
{
	int x;
	create();
    display();
}




