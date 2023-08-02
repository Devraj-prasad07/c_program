#include <stdio.h>
int main()
{
    int x, y;
    float sum;
    printf("Enter the value of X: ");
    scanf("%d", &x);
    printf("Enter the value of Y: ");
    scanf("%d", &y);
    sum = x + y;
    // sum float type hai phir v ans int mai aega kyuki sum ko mention kiya gya hai as a function
    printf("The Result is:%d", (int)sum);
    return 0;
}