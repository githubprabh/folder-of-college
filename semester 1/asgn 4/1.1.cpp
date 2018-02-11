#include<stdio.h>
main()
{
	int arr[200],n,studs,sum=0,x;
    int flag=0;	
	printf("enter number of things ");
	scanf("%d",&studs);
	printf("here we go\n");
	for(n=0;n<studs;n++)
	{
		printf("number %d\n",n+1);
		scanf("%d",&arr[n]);
	}
	
	printf("find the number to be seareched ");
	scanf("%d",&x);
    for(n=0;n<studs;n++)
    {
    if(arr[n]==x)
	{
		flag++;
	}
	}
    printf("\nyes the number is present \nnumber of times the num came  %d",flag);
	
}
