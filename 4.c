#include <stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1 ;
    return n*factorial (n-1);
}
int main()
{


int num;
printf("enter the no.");
scanf("%d",&num);
printf("factorial is %d",factorial(num) );
return 0;
}
