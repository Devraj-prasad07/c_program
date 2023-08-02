#include <stdio.h>
// WAP to print no of days in the form of switch case.
int main()
{
    char days;
    printf("Enter days(1-7): ");
    scanf("%s", &days);

    switch (days)
    {
    case 'm':
        printf("Monday \n");
        break;
    case 't':
        printf("Tuesday \n");
        break;
    case 'w':
        printf("Wednesday \n");
        break;
    case 'T':
        printf("Thursday \n");
        break;
    case 'f':
        printf("Friday \n");
        break;
    case 's':
        printf("Saturday \n");
        break;
    case 'S':
        printf("Sunday \n");
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}