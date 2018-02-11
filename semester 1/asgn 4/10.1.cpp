#include<stdio.h>
main()
{
	int a[20][20],b[20][20],c[40][40],i,j,k,l,m,n,p,q;
	printf("enter size of matrix A<2-D>\t");
	scanf("%d%d",&m,&n);
	printf("enter size of matrix B<2-d>\t");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
	printf("multiplication applicable and enter elemenets\n");
	printf("of A");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n%d-%d\t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("of b now");
	for(k=0;k<p;k++)
	{
		for(l=0;l<q;l++)
		{
			printf("\n%d-%d\t",k,l);
			scanf("%d",&b[k][l]);
		}
	}
	//multiplication
	int sum=0,x,y;
	for(i=0,y=0;i<m,y<q;i++,y++)
	{
	//	for(x=0;x<m;x++)
		for(l=0,x=0;l<q,x<m;l++,x++)
		{
		sum=0;
		for(j=0,k=0;j<n,k<p;j++,k++)
		{
		sum=sum+(a[i][j]*b[k][l]);
		c[x][y]=sum;
	}  }
	}
	for(y=0;y<q;y++)
	{
		for(x=0;x<m;x++)
		printf("\nelements of resulants matrix %d-%d  = %d\n",x,y,c[x][y]);
		}
	
	
	
}
	else
	printf("multipliaction denied");

	
	
	
	
	
}
