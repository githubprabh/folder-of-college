#include<iostream>                    // input should be correct
//#include<stdio.h>
using namespace std;
int main()                   
{
     int array[10];
     int n;
     cout<<"enter number of test cases\t";
     cin>>n;
     cout<<"enter value with only one odd\n ";
          for(int i=0;i<n;i++){
          cout<<i+1<<" ";
          cin>>array[i];
     }

     
int j;
     for(int i=0 ; i<n ; i++){
	 int count = 0;
     	for(j = 0 ; j< n ;j++){
     		if(array[j]==array[i]){
     			count++;
			 }
			 
			 }
			 if(count%2==1){
			 	cout<<" odd times ->"<<array[i]; 
				 goto exit;
		 }
	 }
	 exit:{;}
}
