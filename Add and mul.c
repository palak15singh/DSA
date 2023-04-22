#include <stdio.h>
#include <process.h>
void read (int a[20][20],int r,int c);
void write (int a[20][20],int r,int c);
void add(int a[20][20], int b[20][20],int r1, int c1);
void mul (int a[20][20],int b[20][20],int r1,int c1,int r2,int c2);
int i,j,k;
int main()
{
	int ch,a[20][20],b[20][20],r1,c1,r2,c2;
	printf("enter rows and columns for matrix A");
	scanf("%d %d",&r1,&c1);
		printf("enter rows and columns for matrix A");
	scanf("%d %d",&r2,&c2);
	printf("\n*****MENU*****");
	printf("\n1 Multiplication\n");
	printf("\n2 Addition\n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: if(c1==r2)
		{
			printf("\n Enter %d elements for matrix A\n",r1*c1);
			read(a,r1,c1);
			printf("\n Enter %d elements for matrix B\n",r2*c2);
			read(b,r2,c2);
			printf("\n Elements of matrix A is\n");
			write (a,r1,c1);
			printf("\n Elements of matrix B is\n");
			write(b,r2,c2);
			mul(a,b,r1,c1,r2,c2);
		}
		else
		printf("\n Multiplication not possible");
		break;
		case 2: if(r1==r2 && c1==c2)
		{
			printf("\n Enter %d elements for matrix A\n",r1*c1);
			read(a,r1,c1);
			printf("\n Enter %d elements for matrix B\n",r1*c1);
			read(b,r1,c1);
			printf("\n Elements of matrix A is\n");
			write (a,r1,c1);
				printf("\n Elements of matrix B is\n");
			write (b,r1,c1);
			add (a,b,r1,c1);
		}
		else
		printf("\nAddition not possible");
		break;
		default: printf("\n Wrong Choice");
	}
	return 0;
}
void read (int a[20][20],int r, int c)
{
	for (i=0;i<r;i++)
	{
		for ( j=0;j<c;j++)
	scanf("%d",&a[i][j]);
}
}
void write (int a[20][20],int r, int c)
{
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		printf("%d",a[i][j]);
printf("/n");
}
}
void add (int a[20][20],int b[20][20],int r1,int c1)
{
	int c[20][20];
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("\n Matrix after addition is \n");
	write (c,r1,c1);
}
void mul (int a[20][20],int b[20][20],int r1,int c1,int r2,int c2)
{
	int sum=0;
	int c[20][20];
	for ( i=0;i<r1;i++)
	{
		for ( j=0;j<c2;j++)
		{
			sum=0;
			for( k=0;k<c1;k++)
			sum=sum+a[i][k]*b[k][j];
			c[i][j]=sum;
		}
	}
	printf("\n Multiplication of matrix is\n");
	write (c,r1,c2);
}

