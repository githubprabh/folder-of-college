#include<stdio.h>   //basic to class
#include<iostream>

using namespace std;
class A{
	int a,b;
	public:
		A(){
			a=0;b=0; //this can comented
		};
		A(int x){
			a=x ; b=0;
		}
		void showdata(){
			cout<<"a="<<a<<" b= "<<b;
		}
};
int main(){
	A c;
	int x=5;
	c=x;
	c.showdata();
	
}

