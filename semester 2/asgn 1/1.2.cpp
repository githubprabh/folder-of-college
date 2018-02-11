#include<stdio.h>
#include<string.h>
main()
{
	int i,no,j,flag=0;	
	puts(" enter number students\t");
	scanf("%d",&no);
	
	char name[no][10],search[no];
	int res,roll[no],sub1[no],sub2[no],sub[no];
	int max_marks;
	
	for(i=0;i<no;i++)
	{      printf("*******student %d **********",i+1);
		switch(1)
		{
			case 1:
				printf("\nname\t");
				scanf("%s",&name[i]);
			case 2:
			    printf("\nroll no\t");
				scanf("%d",&roll[i]);
			case 3:
			    printf("\nmarks of sub 1 (out of 100)\t");
				scanf("%d",&sub1[i]);
			case 4:
			    printf("\nmarks of sub 2 (out of 100)\t");
				scanf("%d",&sub2[i]);			
		}
	}
     
	 //print more ethan 60 %
	 
	for(i=0;i<no;i++)
	{   
	    sub[i]=sub1[i]+sub2[i];
		if((sub[i]/2)>(60))
		{
		printf("\nroll no\t%d  got   %d/200 with %d%%",roll[i],sub[i],sub[i]/2);
		flag++;
		}
				
	}	
		printf("\n\n     %d out of %d students got more than 60% ",flag,no);	
}
	
