
//                   ________________________________________________________
//                   __|____|____|____|_____|____|_____|_____|______|___|____
//                      no character , if ele is  infinte 
//                       cars can exit from the waiting
//                      
//          |    |                                                |________|          
//			|	 |                                                |________|
//			|	 |                                                |________|
//			|	 |                                                |________|
//			|	 |                                                |________|
//			|____|                                                |        |
//          stack for temperary purposes                                      queue for waitig cars
//

#include<stdio.h>
#include<bits\stdc++.h>
struct queue{
	int front;
	int rear;
	int q[10];
}s;
struct temp_stack{
	int tfront;
	int trear;
	int tq[10];
}t;
struct waiting_que{
	int wfront;
	int wrear;
	int w[10000];
}w;

int wdisplay(){
    system("cls");
    if(w.wrear!=-1)
	for(int i=0;i<w.wrear+1;i++)
	{
		printf("%d___%d___\n",i+1,w.w[i]);		
	}
	else
	{
		printf("\t---------------------------------\n");
		printf("\tno car is waitng in waiting garage\n");
		printf("\t---------------------------------\n");
	}
}
int waiting(){
    w.wrear++;
	printf("\nenter the car number\n");
	scanf("%d",&w.w[w.wrear]);
	if(w.wrear>-1)
	for(int i=0 ;i<10; i++)     // car should not present earlier at any place
    {
    	if(w.w[w.wrear]==s.q[i])
    	{
    		printf("\n-----------------------------------------------------\n");
    		printf("\n!!!this car is already presnt faurd car call police!!!\n");
    		printf("\n------------------------------------------------------\n");
    		w.wrear--;
    		goto exit1;	
		}
	} 
	if(w.wrear>0)
	for(int i=0;i<w.wrear;i++)
	{
		if(w.w[w.wrear]==w.w[i])
		{
			printf("\n-----------------------------------------------------\n");
    		printf("\n!!!this car is already presnt faurd car call police!!!\n");
    		printf("\n------------------------------------------------------\n");
    		w.wrear--;
    		goto exit1;
    		
		}
	}
	wdisplay();
    exit1:{return 1;}
}
int display(){
	system("cls");
    printf("%d",s.rear);
    if(s.rear==-1)
    {
    printf("\t----------\n");
    printf("\tempty garage\n");
    printf("\t----------\n");
	}
    else
	for(int i=0 ; i<=s.rear; i++)
	{
		printf("\t%d___%d___\n",i+1,s.q[i]);
	}
	return 1;
}
int enq(){
	if(s.rear<10&&s.rear>=-1)
	s.rear++;
	if(s.rear>=-1 && s.rear<10 )
	{		
	printf("enter the car number %d\t",s.rear+1);
	scanf("%d",&s.q[s.rear]);
	if(s.q[s.rear]<1)
	{
		printf("\t----------------\n");
		printf("\tinvalid car num\n");
		printf("\t----------------\n");
		s.rear--;
		goto exit3;
	}
	if(s.rear>0)
	for(int i=s.rear-1; i>=0 ; i--)
    {
    	if(s.q[s.rear]==s.q[i])
    	{
    		printf("\n-----------------------------------------------------\n");
    		printf("\n!!!this car is already presnt faurd car call police!!!\n");
    		printf("\n------------------------------------------------------\n");
    		s.rear--;
    		goto exit3;
		}
	}
	display();
	}
	if(s.rear>=10)
	{
		s.rear--;        // coz rear was 10 and we need it to be 9
		system("cls");
		printf("\ngarage is full wait\n do you want car to enter waiting garage ???\n");
		printf("1.yes 2.no\t");
		int choice1;
		scanf("%d",&choice1);
		if(choice1==1)
		{
			waiting();
			goto exit3;
		}
		if(choice1==2)
		{
			goto exit3;
		}
		else 
		{
			printf("\t---------------------------\n");
			printf("\tenetered number is wrong\n");
			printf("\t---------------------------\n");
			goto exit3;
		}	
	}
	exit3 :{;}
}
int temp_stack(int position){
    for(int i=0;i<position+1;i++)     // pushing cars into stack
    {
    	t.trear++;                
    	t.tq[i]=s.q[i];
	}
	t.trear--;                        // car removed
	for(int i=position;i<s.rear;i++ )              // shifting one north after a car depart
	{
		s.q[i]=s.q[i+1];
	}
	
	for(int i=0;i<position;i++)            // enq the removed cars back into garage
	{
		s.q[i]=t.tq[i];
	}
}
int deq()
{                              // at departure put a waiting car into garage 
	int depart_car  , count1=0 , count2=0; 
	if(s.rear>-1)
	{
	printf("enter the car number which is to be departed\t");
	scanf("%d",&depart_car);
	for(int i=0;i<s.rear+1;i++)
	{
		if(depart_car==s.q[i])       //  car on frist side of north
		{
			if(i==0)
			{
				printf("car at %d is going to depart\n",i+1);
				count1++;
				for(int j=0;j<s.rear+1;j++)
			    s.q[j]=s.q[j+1];
			}
			if(i!=0)                 // car is not first 
			{
				printf("car at %d is going to depart\n",i+1);
				count1++;
			    temp_stack(i);
			}
	    }
	}
	if(count1>0)
	{
		s.rear--;
	}
	if(count1==0)
			{
				printf("car isnt present in garage\n");
				goto exit10;
			}
	
	else if(s.rear<0)
	{
	printf("\t------------\n");
	printf("\tempty garage\n");
	printf("\t------------\n");	
	}	
		
}
if(s.rear<9&&w.wrear>-1)
{
	s.rear++;
	if(w.wfront>-1&&w.wrear>-1)
	s.q[s.rear]=w.w[w.wfront];    

	for(int i=0;i<w.wrear;i++)
    {
    	w.w[i]=w.w[i+1];
	}
	w.wrear--;
}
display();
exit10:{;}
}


main()
{
	s.front= 0  ; s.rear=-1  ;
	t.tfront= 0 ; t.trear=-1 ;
	w.wfront= 0 ; w.wrear=-1 ;
	
	int choice;while(1){
	printf("\nenter choice\n1.arrival\n2.departure\n3.display garage\n4.display waiting garage\n5.enough so exit\n");
	scanf("%d",&choice);
	s.front++;
	switch(choice){
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
		    wdisplay();
			break;	
		case 5:
			goto exit;
		default:
			system("cls");
		    printf("\tinvalid input\n");
			break;	
	}
	}
	exit:{;}
}
