#include<stdio.h>
#include<string.h>
int main()
{
	char name[10][12],tname[10][12],temp[12];
	int i,j,n;
	printf("Enter the number of names you want to enter: ");
	scanf("%d",&n);
	printf("Enter the names: \n");
	for(i=0;i<n;i++)
	{
		scanf("%s",&name[i]);
		strcpy(tname[i],name[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("Input Names Sorted:\nEntered Names\t\tSorted Names\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t\t%s\n",tname[i],name[i]);
	}
}
