// WAP to insert an element in an array

#include <stdio.h>
#include <conio.h>
void main()
{
	int a[1000],n,i,m,pos,val;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("\n Enter the location you wish to insert an element:");
	scanf("%d",&pos);
	printf("Enter the value to insert:");
	scanf("%d",&val);
	for(i=n-1;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos]=val;
	printf("Resultant array is:\n");
	for(i=0;i<=n;i++)
		printf("%4d",a[i]);
	getch();
}