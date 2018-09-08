// WAP to input an array of n elements and print the array.

#include <stdio.h>
#include <conio.h>
void main()
{
	int a[1000],n,i;
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
	getch();
}