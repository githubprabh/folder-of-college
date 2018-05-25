#include<stdio.h>                // all k 
#include<fstream>                  // try combine
#include<string.h>
#include<iostream>
using namespace std;

class books{
	char title[10][100]; 
	int no_of_copies_avail[10];
	char author[10][100];
	int price_of_one[100];
	int stock_value[10];
	
	public:
	    books();
	    int stock(books b);
		char compare();
};

// global declaration of book and auth to be searched
char name_search[100] , auth_search[100];
books b1;
int no_of_copies_reqd;
int main()
{
	
//	books();
	// give deatils to be found book
	cout<<"enter book name-- ";cin>>name_search;
	b1.compare();
	b1.stock(b1);
}

books::books(){
	FILE *p1,*p2,*p3,*p4;
	p1= fopen("title.txt","r");
	p2= fopen("author.txt","r");
	p3= fopen("price_of_one.txt","r");
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
    	fscanf(p3,"%d",&price_of_one[i]);
	}
	if(!feof(p4)){
		fscanf(p4,"%d",&no_of_copies_avail[i]);
	}
	}
	for(int i=0;i<10;i++){
		cout<<title[i]<<" -- "<<author[i]<<" -- "<<no_of_copies_avail[i]<<" copies--"<<price_of_one[i]<<"/book\n";
	}
}
char books::compare(){
    int count=0;
	for(int i=0; i<10 ;i++)
	{
	if(strcmp(b1.title[i],name_search)==0)
	{
		cout<<"enter author name-- ";cin>>auth_search;
		if(strcmp(b1.author[i],auth_search)==0)
		{	cout<<"\tbook is present in lib \n\tHow many copies you require?\t";
			cin>>no_of_copies_reqd;
			if(b1.no_of_copies_avail[i]>=no_of_copies_reqd){
			cout<<"cost -- "<<price_of_one[i] * no_of_copies_reqd;
//			freopen("no_of_copies.txt","w",stdout);
			ofstream stock_value1;
			stock_value1.open("stock_value.txt");
			ofstream no_of_copies;
			no_of_copies.open("no_of_copies.txt");
			for(int j=0;j<10;j++)
			{
			if(i==j){
				no_of_copies_avail[i]= no_of_copies_avail[i]-no_of_copies_reqd;
				no_of_copies << b1.no_of_copies_avail[i] <<" ";
				stock_value1 << b1.no_of_copies_avail[i] * b1.price_of_one[i]<<"\n";}
			else{
				no_of_copies_avail[j]=no_of_copies_avail[j];
				no_of_copies << b1.no_of_copies_avail[j] <<" ";
				stock_value1 << b1.no_of_copies_avail[j]* b1.price_of_one[j]<<"\n"; }
			}
			fclose(stdout);
			}
			else
			{
			cout<<"only "<<b1.no_of_copies_avail<<" are copies present !sorry! ";
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
		goto  exit;
	}
	exit:{;}
}

int books::stock(books b){
	FILE *p1,*p2,*p3;
	p1=fopen("no_of_copies","r");
	p2=fopen("price_of_one","r");
	p3=fopen("stock_value","w");
//	books b;
//	while(1){
		
cout<<"\nStock vale:-"<<"\n";
		for(int i=0;i<10;i++){
//			b.stock_value[i]=b.no_of_copies_avail[i]*b.price_of_one[i];
			cout<<i+1<<". "<<b.stock_value[i]<<"\n";
		}
//		break;
	
}



