#include<stdio.h>
// Keep taking number as input from user until user enters a no which is multiple of 7.
int main()
{
    do
    {
         int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("%d \n",x);
    if (x % 7 == 0)
    {
        break;
    }
    
    } while (1);
    printf("You have entered wrong input better luck next time!!");
    return 0;
}