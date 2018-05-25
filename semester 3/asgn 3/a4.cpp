#include<stdio.h>
#include<iostream>
using namespace std;

class salesperson;
class sale{
	int date_of_month;
	int amt_of_sale;
	public:
		sale(){
			date_of_month=20;
			amt_of_sale=200;
		}
	friend void display(sale,salesperson);
};

class salesperson{
	int salesperson_id;
	string last_name;
	public:
		salesperson(){
			salesperson_id=1200;
			last_name="abcdefghi";
		}
	friend void display(sale,salesperson);
};


void display(sale s, salesperson sp){
	cout<<s.date_of_month<<" "<<s.amt_of_sale<<" "<<sp.salesperson_id<<" "<<sp.last_name;
}

main(){
	sale s;
	salesperson sp;// s.amt_of_sale>>sp.salesperson_id>>sp.last_name;
	display(s,sp);
}


