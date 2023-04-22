#include <stdio.h>
int i,j;
void read (int a[20][20],int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
}
void write (int a[20][20],int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d",a[i][j]);
		printf("\n");
	}
}
void transpose (int a[20][20],int r,int c)
{
	int b[20][20];
	for (i=0;i<r;i++)
{
	for (j=0;j<c;j++)
	b[j][i]=a[i][j];
	}	
	printf("\n Matrix after transpose\n");
	write (b,c,r);
}
int main()
{
	int ch,a[20][20],r1,c1;
	printf("enter rows and columns for matrix");
	scanf("%d %d", &r1,&c1);
		printf("enter %d elements for matrix\n",r1*c1);
	read(a,r1,c1);
	printf("\n elements for matrix before transpose\n");
	write(a,r1,c1);
	transpose(a,r1,c1);
	return 0;
}
