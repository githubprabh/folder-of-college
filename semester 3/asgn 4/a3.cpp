#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void setdata(int i)
    {   a=i;    }
    void operator ++()
    {
        a=++a;
        cout<<"pre increment "<<a<<endl;
    }
    void operator ++(int)
    {
        a=a++;
        cout<<"post increment "<<a<<endl;
    }
};
int main()
{
    A a1;
    a1.setdata(10);
    ++a1;
    a1++;
}
