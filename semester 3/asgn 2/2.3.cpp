#include <iostream>

using namespace std;
int top=-1,topd=-1,topc=-1;

int i[10];
double d[10];
char c[10];
void push(int);
void push(double);
void push(char);
int pop(int);
double pop(double);
char pop(char);
void display(int i[]);
void display(double d[]);
void display(char c[]);


  void push(int item1)
         {
             if(top>10)
                cout<<"overflow";
             top=top+1;
             i[top]=item1;
         }
          void push(double item2)           //push
         {
             if(topd>10)
                cout<<"overflow";
             topd=topd+1;
             d[topd]=item2;
         }


           void push(char item3)
         {
             if(topc>10)
                cout<<"overflow";
             topc=topc+1;
             c[topc]=item3;
         }

         int pop(int item1)
         {
             if(top<0)
                cout<<"underflow";
             item1=i[top];
             top=top-1;
             return item1;
         }

           double pop(double item2)
         {
             if(topd<0)
                cout<<"underflow";    //pop
             item2=d[topd];
             topd=topd-1;
             return item2;
         }

            char pop(char item3)
         {
             if(topc<0)
                cout<<"underflow";
             item3=c[topc];
             topc=topc-1;
             return item3;
         }

         void display(int i[])
         {   int j;
             if (top<0)
                cout<<"underflow";
             for(j=top;j>=0;j--)
             {
                 cout<<i[j]<<endl;
             }
         }

          void display(double d[])
         {   int j;
             if (topd<0)
                cout<<"underflow";   //display
             for(j=topd;j>=0;j--)
             {
                 cout<<d[j]<<endl;
             }
         }

            void display(char c[])
         {   int j;
             if (topc<0)
                cout<<"underflow";
             for(j=topc;j>=0;j--)
             {
                 cout<<c[j]<<endl;
             }
         }





int main()
{
    int op1=1,op2=1,op3=1,choice,item1;
    double item2;
    char item3;

    while(op1)
    {
        cout<<"-----INTEGERS-------"<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop "<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<"enter integer"<<endl;
                    cin>>item1;
                    push(item1);break;

            case 2: item1=pop(item1);
                    cout<<"popped integer is: "<<item1<<endl;break;

            case 3: display(i);break;

            case 4: exit(1);break;
         }
       cout<<"want to continue with integers? type 1 if yes else 0."<<endl;
       cin>>op1;
     }

       while(op2)
    {
        cout<<"-----DOUBLES------"<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop "<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<"enter double"<<endl;
                    cin>>item2;
                    push(item2);break;

            case 2: item2=pop(item2);
                    cout<<"popped double is: "<<item2<<endl;break;

            case 3: display(d);break;

            case 4: exit(1);break;
         }
       cout<<"want to continue with doubles? type 1 if yes else 0."<<endl;
       cin>>op2;
     }

      while(op3)
    {
        cout<<"-----CHARACTERS-------"<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop "<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<"enter character"<<endl;
                    cin>>item3;
                    push(item3);break;

            case 2: item3=pop(item3);
                    cout<<"popped character is: "<<item3<<endl;break;

            case 3: display(c);break;

            case 4: exit(1);break;
         }
       cout<<"want to continue with characters? type 1 if yes else 0."<<endl;
       cin>>op3;
     }
     return 0;
}
