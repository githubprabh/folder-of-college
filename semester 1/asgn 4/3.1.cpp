#include<stdio.h>
main()
{
	int jb,jid,i,j,a[200][200],b=1500,x;
	
	printf("ids\n");
	for(i=0;i<6;i++)
	{
		j=1;
		a[i][j]=b;
		printf("%d \n",b);	b=b+100;		
	}
    a[0][0]='D';
    a[1][0]='T';
    a[2][0]='M';
    a[3][0]='C';
    a[4][0]='B';
    a[5][0]='A';
    int fly=0;
	printf("enter 0=if jobband not accepted     else 1");
    for(i=0;i<6;i++)
    {
    	//for(j=0;j<6;j++)
    	
		    printf("\nid %d with jb %c\t",a[i][1],a[i][0]);
    	    scanf("%d",&jb);
    	    if(1==jb)
    	    {
    	    	fly++;
			}
    	    
    }
    
	printf(" \n     *accepted job bands are %d*",fly);
	
}
