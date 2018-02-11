#include<iostream>
using namespace std;


#include<stdio.h>         //  program in c+++++
main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	int array[n], a[100];
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	cin>>array[i];
	
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(array[j]>array[i]&&j>i){
				a[k] =array[j]-array[i];
//				printf("%d\n",a[k]);
				k++;
			}
		}
	}
	int temp= a[0];
	for(int i=0;i<k;i++){
		if(temp<a[i]){
			temp=a[i];
		}
	}
    cout<<"max diff with larger number later  -> "<<temp;
}
