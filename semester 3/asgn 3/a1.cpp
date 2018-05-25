#include<stdio.h>                 // all k 
#include<string.h>                   // check here
#include<iostream>
#include<fstream>
using namespace std;

class books{
	char title[10][100]; 
	int no_of_copies_avail[10];
	char author[10][100];
	int price_of_one[100];
	
	public:
	    books();
	    friend int update_price(books b);
};

int update_price(books b)
{
	cout<<"enter name of the book whose price to be updated ";
	char n[100] ; 
	cin>>n;
	for(int i=0; i<10 ;i++)
	{
	while(strcmp(b.title[i],n)==0)
	{
		cout<<"preivious price "<<b.price_of_one[i];
		cout<<" update price is of "<<i+1<<"th book --";
		freopen("price_of_one.txt","w",stdout);
		for(int j=0 ; j<10 ; j++){
			if(i==j){
				cin>>b.price_of_one[i];
				b.price_of_one[j]=b.price_of_one[i];
			}
			else{
				b.price_of_one[j]=b.price_of_one[j];
			}
		}
		
		goto here;
	}
	if(i==10) {cout<<"hello3";goto here;} //break;
    }
    here:
	{
	for(int k=0; k<10 ; k++) 
	{	cout<<" "<<b.price_of_one[k]<<" ";}
    }
    fclose(stdout);
};

// global declaration of book and auth to be searched
char name_search[100] , auth_search[100];
books b1;
int no_of_copies_reqd;
 
main()
{
	// give deatils to be found book
	update_price(b1);
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
		cout<<i+1<<". "<<title[i]<<" -- "<<author[i]<<" -- "<<no_of_copies_avail[i]<<
		" copies--"<<price_of_one[i]<<"/book\n";
	}
}

