#include<stdio.h>
main()
{
	int m,n,a[m][n],sum;
	printf("enter the elements\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
	{
	
	printf("enter element %d %d\n",m,n);
	scanf("%d",&a[m][n]);    
}
}   
    printf("%d %d %d\n",a[0][0],a[0][1],a[0][2]);
        printf("%d %d %d\n",a[1][0],a[1][1],a[1][2]);
    printf("%d %d %d\n",a[2][0],a[2][1],a[2][2]);


    sum=a[0][1]+a[0][2]+a[1][2];
    printf("sum of upper triangular matrix %d\n",sum);
}
