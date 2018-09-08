// WAP to sort the elements of an array in ascending or descending order

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n,step,temp;
    clrscr();
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
	printf("Enter element at a[%d]: ",i);
	scanf("%d",&a[i]);
    }
	for(step=0; step<i; step++)
		for(i=0; i<n-1; i++)
	{
	   if(a[i]>a[i+1])
	   {
	    temp=a[i+1];
	    a[i+1]=a[i];
	    a[i]=temp;
	   }
	}
    printf("In ascending order: ");
    for(i=0; i<n; i++)
	 printf("%d  ",a[i]);
    getch();
}