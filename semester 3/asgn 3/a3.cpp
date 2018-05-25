#include<stdio.h>
#include<iostream>
using namespace std;

class cities;
class cus_data{
	int cus_num;
	int zip_code;
	public:
		cus_data(){
			cus_num=20;
			zip_code=200;
		}
	friend void display(cus_data,cities);
};

class cities{
	string state;
	string city_name;
	public:
		cities(){
			state="punjab";
			city_name="abcdefghi";
		}
	friend void display(cus_data,cities);
};


void display(cus_data cd,cities c){
	cout<<cd.cus_num<<" "<<cd.zip_code;
	cout<<" "<<c.state<<" "<<c.city_name;
}

main(){
	cus_data cd;
	cities c;
	display(cd,c);
}


