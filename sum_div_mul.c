#include<stdio.h>
int main()
{
    int x;
    int y;
    int sum;
    int mul;
    int div;
    printf("Enter the Value of X: ");
    scanf("%d",&x);
    printf("Enter the Value of Y: ");
    scanf("%d",&y);
    sum=x+y;
    mul=x*y;
    div=x%y;
    printf("The Sum Result is: %d\n The Multiply Result is: %d\n The div Result is: %d",sum,mul,div);
    return 0;
}