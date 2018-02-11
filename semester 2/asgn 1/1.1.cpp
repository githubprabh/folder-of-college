#include<stdio.h>
#include<string.h>
main()
{
	int i,no,j;	
	puts(" enter number students\t");
	scanf("%d",&no);
	
	char name[no][10],search[no];
	int res,flag =0,roll[no],sub1[no],sub2[no],sub[no];
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
		}sub[i]=sub1[i]+sub2[i];
	}
	//           database of the student
	
	
	
	/////////////////////////// search for particular student
	///  check if stu is there ?
	
	puts("\n\n\t\ enter name to be searched\t\t");
	scanf("%s",&search);     
//	                                       gets(search);   // <-not working
	for(i=0;i<no;i++)
	{
		res=strcmp(name[i],search);
		if(res==0)
		flag++;
	}
	if(flag > 0)
	puts("   yes student is present");
	else
	puts("sorry not found!!");   
	
	
}
