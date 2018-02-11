#include<stdio.h>                      //     correct
struct create{                        //      enter n = 5     k = 0 
	int a[100000];
	int front;                        // why there will never be a confusion 
	int rear;                           // last else statement seeeeeeeeeeeeeeeeeeeeeeeeeee
}s;
int push(int living,int first_kill)
{
	for(int i=0;i<living;i++)
	{
		s.rear++;
		s.a[i]=i+1;//printf("person  %d\n",s.a[i]);
	}
	
}
int kill,temp,label,count2=0;
int pop(int living,int kill)
{
	int kill_constant=kill;int count3=living;
	kill=kill-1;
    label:
    int count4=0;
    while(1)
	{
//		printf("init %d ",kill+1);
    	s.a[kill]=0;int count=0;
    	while(count<kill_constant){
    		if(s.a[kill+1]!=0)
    		{
    			kill=(kill+1)%(s.rear+1);
    		}
    		else if(s.a[kill+1]==0)
    		{
    			do{
    			kill=(kill+1)%(s.rear+1);
				}while(s.a[kill]==0);
			}
			count=count+1;                      // number of jumps needed 
			
	     }
//	        printf("  %d\n",kill+1); 
		
		
		for(int i=0;i<living;i++)
		{
			if(s.a[i]>0)
			{
				count4=count4+1;
			}
		}
		if(count4!=1)
		goto label;
		else if(count4==1)
		{			
			printf("\n\n--------------------------------\n");
			printf("SAFE POSITION------> %d BEWARE ",kill+1);goto exit;
		}
    }
    
    exit:{;}
}
int pop2(int living,  int (first_kill))
{
	int count10=0;
	for(int i=0;i>first_kill;i--)
	{
		count10--;
		if(first_kill==count10)
		{
			goto here;
		}
	}
	here:
		{
			for(int j=s.rear;j<first_kill;j--)
			{
				s.a[s.a]=0;
			}
		}
}

int main()
{
	int living,first_kill;
	s.front=s.rear=-1;
	printf("enter number of people standing in circle  n=\t");
	scanf("%d",&living);
	if(living<0)
	printf("\ntesting total = 0 enter valid number");
	if(living==0)
	printf("invailid people living");
	printf("where to start from  k=\t\t");
	scanf("%d",&first_kill);
	s.front++;
	push(living,first_kill);

	if(first_kill<0)
	pop2(living, first_kill);
	
	if(first_kill<=living&&living>0&&first_kill>0)
	pop(living,(first_kill));
		
	
		
		
	
//	else 	    printf("\n*invlid inputs* ");	
	
}

       
