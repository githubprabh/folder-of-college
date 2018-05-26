#include<iostream>   //class to basic
using namespace std;

class A{
	int a;
	public:
		void setdata(int x){
			a=x;
		}
		void showdata(){
			cout<<"a= "<<a;
		}
		operator int(){
			return(a);
		}
};

main(){
	A b;
	b.setdata(5);
	b.showdata();
	int x;
	x=b;
	cout<<"\nx= "<<x;
} 
