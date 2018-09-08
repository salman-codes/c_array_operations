// WAP to delete an element from an array at desired location.

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
	printf("\n Enter the location you wish to delete an element:");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
		if(pos>a[i])
		  printf("Deletion is not possible\n");
	for(i=0;i<n;i++)
	{
		if(pos<=a[i])
		{
			for(i=pos;i<n-1;i++)
				a[i]=a[i+1];
			printf("\n Resultant array is:\n");
			for(i=0;i<n-1;i++)
				printf("%4d",a[i]);
		}

	}
	getch();
}