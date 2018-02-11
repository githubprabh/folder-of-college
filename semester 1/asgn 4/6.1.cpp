#include<stdio.h>
#include<conio.h>
 main()
{
int arr1[100],arr2[100],arr3[200],arr4[200],i,j,m,n,t=0,max,k;
printf("Enter the number of elements in array1 (should be less than 100) \n");
scanf("%d",&m);
printf("Enter the number of elements in array2 (should be less than 100) \n");
scanf("%d",&n);
printf("Enter the elements in array1 \n");
for(i=0;i<=m-1;i++)
scanf("%d",&arr1[i]);
printf("Enter the elements in array2 \n");
for(i=0;i<=n-1;i++)
scanf("%d",&arr2[i]);

for(i=0;i<=m-1;i++)
arr3[i]=arr1[i];
for(i=m,j=0;i<=m+n-1,j<=n-1;i++,j++)
arr3[i]=arr2[j];
for(j=0;j<=m+n-1;j++)
{
max=arr3[0];
for(i=0;i<=m+n-1;i++)
{
if(arr3[i]>=max)
{
max=arr3[i];
k=i;
}
}
arr4[t++]=max;
arr3[k]=0;
}
for(i=0;i<=m+n-1;i++)
printf("%d ",arr4[i]);
getch();
}
