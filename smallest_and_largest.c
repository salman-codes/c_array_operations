// C Program to enter 10 numbers from the user and print the largest and smallest element among them

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,a[10],large,small;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("\n Enter the %d number\n: ",i);
		scanf("%d",&a[i]);
	}
	large=a[0];
	small=a[0];
	for(i=0;i<10;i++)
	{
		if(large<a[i])
			large=a[i];
		if(small>a[i])
			small=a[i];
	}
	printf("Largest number is:%d",large);
	printf("\nSmallest number is:%d",small);
	getch();
}