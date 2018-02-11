#include<stdio.h>                                  // y r warning coming
#include<bits/stdc++.h>
struct queue{
	int front , rear ,a[1000][2]= { {0, 0} };
}s;


int display()
{
	system("cls");
	
	if(s.front>s.rear)
	printf("\tenqueue something nothing present here");  
	else
	{
		printf("\ts.no pri data\n");
	for(int  i=s.front ; i<s.rear+1; i++)
	        {
	    	printf("\t%d_____%d____%d\n",i+1,s.a[i][1],s.a[i][0]);
	    	}
		  }  	
}
int enq(){
    s.rear++;
	for(int  i=s.rear ; i<=s.rear ; i++)
	{
		printf("enter ele");
		scanf("%d",&s.a[i][0]);
		printf("enter priority");
		scanf("%d",&s.a[i][1]);
    }display();
	return 1;
}




int deq()
{
    int temp1,temp0;
	loop:
	if(s.front<=s.rear)
	for(int  i=0 ; i<s.rear ; i++)
	{
		if(s.a[i][1]>s.a[i+1][1])
		{
			temp0=s.a[i+1][0];
			temp1=s.a[i+1][1];
			s.a[i+1][0]=s.a[i][0];
			s.a[i+1][1]=s.a[i][1];
			s.a[i][0]=temp0;
			s.a[i][1]=temp1;
		}
	}
	for(int i=s.front;i<s.rear;i++)           // chck if elements are in order
	if(s.a[i][1]>s.a[i+1][1])
	goto loop;
	

		
	if(s.front<=s.rear)                                         	//   deqqing starts
	{printf("before\n ");	printf("\ts.no pri data\n");
	for(int i=s.front;i<s.rear+1;i++)
		printf("\t%d__%d__%d\n",i+1,s.a[i][1],s.a[i][0]);
	
	s.front++;
	
	printf("after\n");printf("\ts.no pri data\n");
	for(int i=s.front;i<s.rear+1;i++)
	printf("\t%d__%d__%d\n",i+1,s.a[i][1],s.a[i][0]);
	}
	
	if(s.front>s.rear)
	printf("\nempty qu\n");goto exit1;
	exit1:{return 1;}
}

int main()
{ 
	s.front=0  ;  s.rear=-1 ; int choice;
	while(1){
	printf("\n\n1.ENQ 2.DEQ 3.DISPLAY 4.EXIT\nenter your choice\n");
	scanf("%d",&choice);	
	switch(choice)
	{
		case 1:
			enq();
			break;
		case 2:
			deq();
			break;
		case 3:
			display();
			break;
		case 4:
		    goto exit;	
		default:
		    system("cls");
		    printf("invalid number enter again");
			break;	
	}
	}
	
exit:{;}
}
