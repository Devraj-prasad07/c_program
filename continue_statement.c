#include<stdio.h>
// Print all no from 1-10 except 7
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i==7)
        {
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}