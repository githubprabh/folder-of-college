#include<bits/stdc++.h>
#include<string.h>
char infix[100] , postfix[100] ;   int j=1,k=0;
struct stack{
	char arr[100];
	int top;
    }st;
int preced(char opd)                                     ///   a+b+c   a*b+c
{
	if(opd=='(')
	return 0;
	if(opd=='+'||opd=='-')
    return 1; 
	if(opd=='*'||opd=='/')
    return 2; 
}    
char push_opd(char opd)
    {
	
	postfix[k]=opd;
//	printf("_%c_%c_",postfix[k],opd);
    k++;
    return 1;
	}
char push_opt(char opd)
    {
	   st.arr[0]='(';
       if(preced(opd)>preced(st.arr[st.top]))
       {
        st.top++;
	    st.arr[st.top]=opd;
//        printf("\ntop of stack %c\n",st.arr[st.top]);
	   }
	   else
	   
	   {
	   
	   do{ 
	       //if(preced(opd)<=preced(st.arr[st.top]))   ///  
		  //if(st.top!=0)
	      push_opd(st.arr[st.top]);
	      st.top--;
//	      push_opt(opd);
	     }while((st.top!=0));
       push_opt(opd);
	   }
    }

main()
{
	st.top=0;	char opt;     	printf("enter the expression\n");
	                            gets(infix);
	
	//   separating into operator , operand , left parenthesis , rigth parenthesis
	
	for(int i=0;i<strlen(infix);i++)
	{
		if((   (infix[i]>='a' ) &&  (infix[i]<='z')  ) || (   (infix[i]>='A') && (infix[i]<'Z')  ))                  //operand
		push_opd(infix[i]);
		
		else if(infix[i]== '+'|| infix[i]=='-'|| infix[i]=='/'|| infix[i]=='*'|| infix[i]=='('|| infix[i]==')')
		{
		push_opt(infix[i]);
//	    printf("%d",i); 	    
	    }
		else
		{
		printf("wrong element");
	exit(0);
	}
		
	}
	//  if stack is empty 
//	printf(" %d %d ",strlen(infix),strlen(postfix));
	
	if(((strlen(infix))!=(strlen(postfix))))
	do{
//	printf(",,,%c,,,",st.arr[st.top]);
	push_opd(st.arr[st.top]);
	st.top--;    
	}while(st.top!=0);
	
	printf("\nthe postfix expression becomes\n");
	for(int i=0;i<strlen(infix);i++)
	printf("%c",postfix[i]);
	
	
}
