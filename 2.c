#include <stdio.h>
int main()
{
int x,y=0;
printf("enter the no.");
scanf("%d",&x);
 while(x>0)
 {

y=y+1;
x=x/10;


 }
 printf("%d",y);
 return 0;
 }
