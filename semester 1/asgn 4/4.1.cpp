#include<stdio.h>
main()
{
	int arr[2000],n,studs,x;
    int flag=0;	
	printf("enter number of things ");
	scanf("%d",&studs);
	for(n=0;n<studs;n++)
	{
		printf("number %d\n",n+1);
		scanf("%d",&arr[n]);
	}
//	printf("enter num to be checked ");
//	scanf("%d",&x);
	for(n=0;n<studs;n++)
	{
		if(arr[n]<=0)
		flag++;
	}
	printf("negative number/s is/are %d \n and positive number/s is/are %d",flag,n-flag);
}
