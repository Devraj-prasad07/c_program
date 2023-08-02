#include<stdio.h>
// Questions on do while loop.
int main()
{
    int x;
    printf("Enter your Number: ");
    scanf("%d",&x);
    int i = 1;
    do{
        printf("%d \n",i);
        i++;
    } while (i<=x);
    return 0;
}