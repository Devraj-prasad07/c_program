#include<stdio.h>
// print all the odd no from 1 to 50 by using loop statement.
int main()
{
  for (int i = 1;i<=50;i++)
  {
    if (i % 2 != 0)
    {
        printf("%d \n", i);
    }
  }
  return 0;
}