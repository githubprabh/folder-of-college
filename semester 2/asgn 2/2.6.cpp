#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int top=-1;
char array[200];
char push()
{   
    printf("enter the string\t\t");                      //                  ------   gets  working ??
    fflush(stdin);
    gets(array);                                                        
//    scanf("%s",&array);                                 //                   --------        yn , yes , no ,num  <- working?????
	top=strlen(array);
	return array[200];                                   //            strlen == 1    ????
	//printf("entered string %s",array);
}
char pop(char array[200])                        //    enter string    hello n ,hello nu (n nu is transferred to next scanf)
{
//	printf("%d ",top);
    int i;
	printf("\nreveresd string is \t\t");
//	printf("b=value of top %d",top);
	printf("\t\"");
	for(i=top-1;i!=-1;i--)
	{
		printf("%c",array[i]);
	}printf("\"");
	top=i;
	
}


main()
{
    char choice;
	do{
	printf("\n\nwant to input string Y/y= yes  otherwise N/n\t"); 
	
    scanf("%s",&choice);                                 //      if it is %c then enter 'u'   why it loops two times
//    scanf("%c",&choice); 
		if((choice==89||choice==121))                     //    doubt-------
	    {
		    array[200]=push();
		    goto exit1;
    	}    
	
	    else if(choice=='N'||choice=='n')
	    {
		    printf("\nexited come some other day  \n");
		    goto exit;
		}
		
	    else 
	    {
		    printf("invalid enter again");
	    }
	    
    }while(choice!=89||choice!=121);
    
	exit1:
		
	char choice1;
	do{
		printf("\nwant to see \"reversed\" string Y/y= yes  otherwise N/n\t");	
    	scanf("%s",&choice1);
    	////////////////////////////popping
	if(choice1=='Y'||choice1=='y')
	    {
		if(top!=-1)
		pop(array);
		else
		printf("\nERRROR  oops it seems you havnt entered the string");
		goto exit2;
	    }
	else if(choice1=='N'||choice1=='n')
	    {
		printf("\nexited");goto exit;
		}
	else 
		{
		printf("\nYOUR choice is invalid");
	    }

	}while(choice!=89||choice!=121);
	exit2:{}
	exit:{}
		
}
