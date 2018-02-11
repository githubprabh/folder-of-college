#include<stdio.h>
#include<bits/stdc++.h>             //   ooooolllll set 

#include<stdlib.h>           //  no negative power
                              //  list sort show  // coeff cant be zero
typedef struct list1
{
	int power ; int coeff;
	struct list1 *link;
}node1;
node1 *head1=NULL;

typedef struct list2
{
	int power;int coeff;
	struct list2 *link; 
}node2;
node2 *head2=NULL;

typedef struct list3
{
	int power; int coeff;
	struct list3 *link;
}node3;
node3 *head3 =NULL;

void create1()
{
	printf("\t----------------STRING 1-----------\n");
	node1 *p , *q , *temp1 ;  int s ;
    do{
	p=(node1*)malloc(sizeof(node1));
	if(head1==NULL)
	{
		again1 :
		printf("enter power\t");
		scanf("%d",&p->power);	
		if(p->power>=0)
		{
			here1:
			printf("enter coeff\t");
			scanf("%d",&p->coeff);
			if(p->coeff==0)
			{
				printf("\n\t***WHAT IS USE OF THIS ZERO???***\n\n");
				goto here1;
			}
		}
		else 
		{
			printf("\n\tPOSITIVE NUMBER ONLY !!!\n\n");
			goto again1;
		}
		p->link=NULL;
		head1=p;
		q=p;
//		printf("%d%d",head1->link,p);
	}
	else
	{
	    p->link=NULL;
		q->link=p;
		q=p;
		
	again2:	
//			system("cls");
		printf("enter power\t");
		scanf("%d",&p->power);
	temp1=head1;
	check:
		if(temp1->power==p->power)
		{
//			printf("%d%d",head1->link,p->link);
            printf("\n\t**OOOOPS!!! NO SAME POWER**\n\n");
			goto again2;
		}
		else 
		{
//			printf("%d %d",temp1->link , p->link);
			temp1 = temp1->link;     
//			printf("%d %d",temp1->link , p->link);
			if(temp1->link==NULL)
			{
				goto out;
			}
			else 
			goto check;
		}
		
	out:
		if(p->power>=0)
		{
			printf("enter coeff\t");
			scanf("%d",&p->coeff);
			if(p->coeff==0)
			{
				printf("\n\t***WHAT IS USE OF THIS ZERO???***\n\n");
				goto out;
			}
		}
		else
		{
			printf("\n\tPOSITIVE NUMBER ONLY !!!\n\n");
			goto again2;
		}
	    	
		
	}
	
	printf("press 1 ->wanna enter more\t");
	scanf("%d",&s);
	}while(s==1);
}
void create2() 
{
		printf("\t----------------STRING 2-----------\n");

	node2 *k , *l   , *temp2;   int s ;
    do{
	k=(node2*)malloc(sizeof(node2));
	if(head2==NULL)
	{
		again3 :
		printf("enter power\t");
		scanf("%d",&k->power);
		if(k->power>=0)
		{
			here:
			printf("enter coeff\t");
			scanf("%d",&k->coeff);
			if(k->coeff==0)
			{
				printf("\n\t***WHAT IS USE OF THIS ZERO???***\n\n");
				goto here;
			}
		}
		else 
		{
			printf("\n\tPOSITIVE NUMBER ONLY !!!\n\n");
			goto again3;
		}
		k->link=NULL;
		head2=k;
		l=k;
	}
	else
	{
		k->link=NULL;
		l->link=k;
		l=k;
		again4:
		printf("enter power\t");
		scanf("%d",&k->power);
		temp2=head2;
		check:
		if(temp2->power == k->power)
		{
		    printf("\n\t**OOOOPS!!! NO SAME POWER**\n\n");
			goto again4;
		}
		else
		{
			temp2 = temp2->link;
			if(temp2->link==NULL)
			goto out2;
			else
			goto check;
		}
		out2:
		if(k->power>=0)
		{
			printf("enter coeff\t");
			scanf("%d",&k->coeff);
			if(k->coeff==0)
			{
				printf("\n\t***WHAT IS USE OF THIS ZERO???***\n\n");
				goto out2;
			}
		}
		else
		{
			printf("\n\tPOSITIVE NUMBER ONLY !!!\n\n");
			goto again4;
		}
	    	
		
	}
	
	printf("press 1 -> wanna enter more\t");
	scanf("%d",&s);
	}while(s==1);	
}
void display1()
{
	system("cls");
		printf("\n\n----------------STRING 1-----------\n");

	node1 *a;
	a=head1;printf("\n\t");
	while(a->link!=NULL)
	{
		printf(" %dx^%d +",a->coeff,a->power);
		a=a->link;
	}   
	printf(" %dx^%d ",a->coeff,a->power);

	
}
void display2()
{
	printf("\n\n----------------STRING 2-----------\n");
	node2 *a;
	a=head2;printf("\n\t");
	while(a->link!=NULL)
	{
		printf(" %dx^%d +",a->coeff,a->power);
		a=a->link;
	}   
	printf(" %dx^%d \n",a->coeff,a->power);
	
}

void solve()
{
	node1 *x ,*temp1;	temp1 = x = head1;
	node2 *y ,*temp2;	temp2 = y = head2;
	node3 *z ,*temp3;	temp3 = z = head3;
	printf("---------------RESULT-------------\n\n");
    do{
    	y=head2;
	again10:
	if(x->power == y->power) // for same power in str1 and str2
	{
		
			z=(node3*)malloc(sizeof(node3));
			z->coeff = x->coeff + y->coeff ;
			z->power = x->power;
			z->link=NULL;
			x->coeff = 0; y->coeff = 0 ;
			printf("\t %dx^%d ",z->coeff,z->power);
//			printf("c5");
			if(y->link!=NULL)
			y=y->link;
			else
			goto exit;
			if(x->link!=NULL)
			x=x->link;
			else goto exit;
			
			
			goto again10;
	}
	else  // some non same power in string 1
	{	
	    if(y->link!=NULL)
		{
			y=y->link;goto again10;
//			printf("c7");
		}		
		if(y->link==NULL)
		{
			z=(node3*)malloc(sizeof(node3));
            z->power = x->power ; z->coeff=x->coeff;
            x->coeff=0;
            z->link=NULL;
            printf("\t %dx^%d ",z->coeff,z->power);
            if(x->link!=NULL)
            x=x->link;
            else
            {
//			    printf("c7");
            	goto exit;
            	
			}
		}	
	}
    }while(1);
//    printf("c8");
    exit:{;}
//    printf("c9");
	y=head2;
//    while(1)
    {
//	printf("c10");
    	up:
    	if(y->coeff==0)
    	{
    		if(y->link!=NULL)
    		{
    			y=y->link;
//				printf("c1");
    			goto up;
			}
			else
			{
				goto exit2;
			}
		}
		else 
		{
//			printf("c2");
			z=(node3*)malloc(sizeof(node3));
            z->coeff = y->coeff; z->link=NULL; z->power=y->power;
            printf("\t %dx^%d ",z->coeff,z->power);

            if(y->link!=NULL)
            {
            	y=y->link;
            	goto up;
			}
			else
			{
//				printf("c3");
				goto exit2;
			}	
		}
	}
    exit2:{;}
    
    x=head1;
//    while(1)
    {
//	printf("c10");
    	up1:
    	if(x->coeff==0)
    	{
    		if(x->link!=NULL)
    		{
    			x=x->link;
//				printf("c1");
    			goto up1;
			}
			else
			{
				goto exit3;
			}
		}
		else 
		{
//			printf("c2");
			z=(node3*)malloc(sizeof(node3));
            z->coeff = x->coeff; z->link=NULL; z->power=x->power;
            printf("\t %dx^%d ",z->coeff,z->power);

            if(x->link!=NULL)
            {
            	x=x->link;
            	goto up1;
			}
			else
			{
//				printf("c3");
				goto exit3;
			}	
		}
	}
    exit3:{;}
    
	
}

main()
{
	create1();
	create2();
	display1();
	display2();
//	sort1();
//	sort2();
	solve();
	
}
