#include<stdio.h>
int main()
{
int num;
  printf("Four digit special perfect square numbers: ");

                for (num = 1000; num <= 9999; num++)

                     {

                           int nroot = (int) sqrt(num);

                           if (num == nroot * nroot)

                              {

                                    int upper = num / 100;

                                    int uroot = sqrt(upper);

                                    if (upper == uroot * uroot)

                                        {

                                                 int lower = num % 100;

                                                 int lroot = sqrt(lower);

                                                 if (lower== lroot * lroot)

                                                     printf("%d ", num);

                                                     getch();

                                         }

                              }

}                     }

