#include <stdio.h>
int main ()
{
int i,j,k;
printf("enter the no. to round off");
scanf("%d",&i);
printf("enter the another integer");
scanf("%d",&j);
k=i%j;
if(i%j!=0)
   {i = i+j - k;
   }
printf("%d",i);
}
