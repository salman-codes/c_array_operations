// WAP to initialize and display array elements using pointers

#include <stdio.h>
#include <conio.h>
void main()
{
	int **p,a[10]={2,3,6,1,5,8,9,33,21,45};
	int i=0;
	p=a;
	clrscr();
	printf("\tElement  Value  Address\n");
	while (i<10)
	{
		printf("\ta[%d]    %d  %u\n",i,*p,**p);
		i++;
		p++;
	}
	getch();
}