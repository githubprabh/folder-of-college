#include<stdio.h>                 // done 
#include<string.h>
#include<iostream>
using namespace std;

class books{
	char title[10][100]; 
	int no_of_copies_avail[10];
	char author[10][100];
	int cost_of_one[100];
	
	public:
	    books();
		char compare();
};

// global declaration of book and auth to be searched
char name_search[100] , auth_search[100];books b1;
int no_of_copies_reqd;
int main()
{
	
//	books();
	// give deatils to be found book
	
	b1.compare();
}

books::books(){
	FILE *p1,*p2,*p3,*p4;
	p1= fopen("title.txt","r");
	p2= fopen("author.txt","r");
	p3= fopen("cost_of_one.txt","r");
	p4= fopen("no_of_copies.txt","r");
	for(int i=0 ; i<10 ; i++)
	{
	if(!feof(p1)){
		fscanf(p1,"%s",title[i]);
	}
	if(!feof(p2)){
		fscanf(p2,"%s",author[i]);
	}
    if(!feof(p3)){
    	fscanf(p3,"%d",&cost_of_one[i]);
	}
	if(!feof(p4)){
		fscanf(p4,"%d",&no_of_copies_avail[i]);
	}
	}
	for(int i=0;i<10;i++){
		cout<<title[i]<<" -- "<<author[i]<<" -- "<<no_of_copies_avail[i]<<" copies--"<<cost_of_one[i]<<"/book\n";
	}
}
char books::compare(){
    int count=0;
    int count1=0;int count2=0;int flag;
    do{
	cout<<"enter book name-- ";cin>>name_search;
	
	for(int i=0; i<10 ;i++)
	{
	if(strcmp(b1.title[i],name_search)==0)
	{
		cout<<"enter author name-- ";cin>>auth_search;
		if(strcmp(b1.author[i],auth_search)==0)
		{	cout<<"\tbook is present in lib \n\tHow many copies you require?\t";
			cin>>no_of_copies_reqd;
			if(b1.no_of_copies_avail[i]>=no_of_copies_reqd){
			cout<<"cost -- "<<cost_of_one[i] * no_of_copies_reqd;count1++;}
			else{
			cout<<" copies present !sorry! ";count2++;
			goto exit;
			}
		}
		else
		{
			cout<<"check auth as book name is present";
			cout<<"\nwanna try once more y/Y = yes";
			char y;cin>>y;
			if(y=='Y'||y=='y')
			compare();
			else break; 
		}
		count++;
	}
	
	}
	if(count==0){
	//if(i==11 && strcmp(b1.title[i],name_search)!=0)
		cout<<"\n\tno book of this name is present";
		count2++;
		goto  exit;
	}
	exit:{;}
	cout<<"\nwanna make more transcations if yes enter - 1 ";cin>>flag;
	
	
	}while(flag==1);
	cout<<"\nsuccessful trans ->"<<count1<<"\nunsuccess "<<count2;
	
}




