#include<stdio.h>
// WAP and print if the age is greater then print adult if not then print not adult.
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if(age > 18){
        printf("You are Adult and you are eligible \n");
    }
    else {
        printf("You are not eligible \n");
    }
    printf("Thanks for your valuable opinion");
    return 0;
}