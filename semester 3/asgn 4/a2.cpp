#include<iostream>     // done
using namespace std;
class collegecourse
{
    char courseid[7],grade;
    int credits,honourpoints;
public:
    collegecourse(char id[],char g,int c)
    {
        for(int i=0;i<7;i++)
        {courseid[i]=id[i];}
        grade=g;
        credits=c;
        honourpoints=(69-grade)*credits;
    }
    void operator +(collegecourse c)
    {
        int s;
        s=honourpoints +c.honourpoints;
        cout<<"honor points for the courses is "<<s<<endl;
    }

};
int main()
{
	cout<<"stu 1\n";
    cout<<"enter the courseid"<<endl;
    char id[7],g;
    cin>>id;
    cout<<"enter the grade"<<endl;
    cin>>g;
    int c;
    cout<<"enter the credits"<<endl;
    cin>>c;
    collegecourse c1(id,g,c);
	cout<<"stu 2\n";
    cout<<"enter the course id"<<endl;
    cin>>id;
    cout<<"enter the grade"<<endl;
    cin>>g;
    cout<<"enter the credits"<<endl;
    cin>>c;


    collegecourse c2(id,g,c);
    c1+c2;
    return 0;
}
