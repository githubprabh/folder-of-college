#include<iostream>     // what if we want to add more than two obj data
using namespace std;

class homework{
	string name;
	string asign;
	int min;
	public:
		void setdata(){
			cout<<"enter name ";cin>>name;
			cout<<"enter asign ";cin>>asign;
			cout<<"enter min ";cin>>min;
		}
		void operator + (homework h){
			cout<<"total time "<<min+h.min;
		}
};

main(){
	homework h1,h2;cout<<"\nenter details of stu 1\n";
	h1.setdata();cout<<"\nenter details of stu 2\n";
	h2.setdata();
	h1+h2;
}

