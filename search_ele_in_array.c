// WAP to search an element in an array.

#include <stdio.h>
#include <conio.h>
void main()
{
   int a[30],x,n,i;
   printf("nEnter no of elements :");
   scanf("%d",&n);
   printf("nEnter the values :");
   for(i=0;i < n;i++)
   scanf("%d",&a[i]);
   printf("nEnter the elements to be searched");
   scanf("%d",&x);
   i=0; 
   while(i < n && x!=a[i])
   i++;
   if(i < n) 
    printf("found at the location =%d",i+1);
   else
    printf("n not found");
   getch();
}