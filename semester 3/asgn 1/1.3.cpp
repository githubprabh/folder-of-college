#include<stdio.h>
#include<iostream>

using namespace std;

main(){
	cout<<"enter 3 numbers\n";
	int a,b,c;
	cin>>a>>b>>c;
	if(cin.fail()) {
		cout<<"enter  NUMBERs only!!";
		goto exit;
	}
	if(a>b){
		if(a>c){
			cout<<"largest "<<a;
		}
		else{
			cout<<"largest "<<c;
		}
	}
	else{
		if(a>c){
			cout<<"largest "<<b;
		}
		else{
			if(b>c) cout<<"largest "<<b;
			else cout<<"largest "<<c;
		}
	}
	exit:{;}
}
