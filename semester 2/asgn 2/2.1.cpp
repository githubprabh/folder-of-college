#include<stdio.h>
#include<iostream>
#include<ctype.h>
using namespace std;
int a[10],top=-1;
int push(int num)
{
	if(top==9)
	{
		printf("stack is OVERFLOW\t pop some element");
	}
	else
	{
		top+=1;
		a[top]=num;
	}
}
void pop()
{
	if(top<0)
	{
		cout<<"_stack is UNDERFLOW_";
	}
	else
	{  
	    cout<<"popped "<<""<<a[top];
		top=top-1;
	}
}
void display()
{
	if(top<0)
	cout<<"nothing is present in stack";
		
	
	for(int i=0;i<=top;i++)
	cout<<"\n"<<a[i];
}




int main()
{
	int choice ;int num;
	do{
	cout<<"\n--------------------------------\n";
	cout<<"\nenter choice \n1.PUSH 2.POP 3.DISPLAY 4.EXIT\n";
	
	cin>>choice;
	
	
	if(choice==1)
	{
		cout<<"enter num to be inserted\t";
		scanf("%d",&num);
		push(num);
	}
	if(choice==2)
	{
		pop();
	}
	if(choice==3)
	{
		display();
	}
	else if(choice>4||choice<1)
	{
	system("cls");
    cout<<"enter a valid number enter again\n";continue;
    }
}while(choice!=4);
	if(choice==4)
	cout<<"thank you for exiting  visit again :>";
		
	return 0;
}
