#include<stdio.h>
#include<iostream>
using namespace std;
void solve(int,int);
void solve(double,double);
void solve(float,float);
main()
{
	int i,i1;double d,d2;float f,f2;
	cout<<"enter int \n";
	cin>>i>>i1;  solve(i,i1);
	cout<<"enter double \n";
	cin>>d>>d2;  solve(d,d2);
	cout<<"enter float \n";
	cin>>f>>f2;  solve(f,f2);
}

void solve(int a,int b){
	if(a>b) cout<<"int max "<<a<<"\n";
	else cout<<"int max "<<b<<"\n";
}
void solve(double a, double b){
	if(a>b) cout<<"double max "<<a<<"\n";
	else cout<<"double max "<<b<<"\n";
}
void solve(float a, float b){
	if(a>b) cout<<"float max "<<a<<"\n";
	else cout<<"float max "<<b<<"\n";
}
