/*WAP and print if the age is >= 18 then print adult,if age is >= 13 and =< 18 then print teenager and if < 13 then print childz */
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are adult");
    }
    else if(age>=13 && age <= 18)
    {
        printf("You are teenager");
    }
    else
    {
        printf("child");
    }
    return 0;
}