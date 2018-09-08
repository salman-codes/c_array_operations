// WAP to merge two array entered by the user

#include <stdio.h>
#include <conio.h>
void merge(int[],int[],int[],int,int);
void main()
{
	int A[100],B[100],C[100],a,b,i;
	clrscr();
	printf("\n enter the size of A");
	scanf("%d",&a);
	printf("\n enter the %d elements:",i);
	for(i=0;i<a;i++)
	scanf("%d",&A[i]);
	printf("\n first array is: ");
	for(i=0;i<a;i++)
		printf(" %d",A[i]);
	printf("\n enter the size of B");
	scanf("%d",&b);
	printf("\n enter the %d elements:",i);
	for(i=0;i<b;i++)
		scanf("%d",&B[i]);
	printf("\n second array is: ");
	for(i=0;i<b;i++)
		printf(" %d",B[i]);
	for(i=0;i<a;i++)
		C[i]=A[i];
	for(i=0;i<b;i++)
		C[i+a]=B[i];
	printf("\n array after merging=");
	for(i=0;i<(a+b);i++)
		printf("%4d",C[i]);
	getch();
}