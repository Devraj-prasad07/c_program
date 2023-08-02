#include<stdio.h>
// questions on while loop
int main()
{
   int x;
   printf("Enter your Number: ");
   scanf("%d",&x);

   int i = 0;
   while (i<=x){
    printf("%d \n",i);
    i++;
   }
   return 0;
}