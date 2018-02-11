#include<stdio.h>
#include<iostream>
using namespace std;
swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
main()
{
	int p;
	int r;
	cout<<"enter two num ";cin>>p>>r;
//	cout<<" "<<p<<" "<<q<<" "<<r;
	swap(p,r);
	cout<<"swaped p = "<<p<<" r = "<<r;
}
