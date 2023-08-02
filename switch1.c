// Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter the character to check whether it is alphabet or consonant: ");
    scanf("%s", &alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("vowel");
        break;
    case 'b':
        printf("consonant");
        break;
    case 'c':
        printf("consonant");
        break;
    case 'd':
        printf("consonat");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'f':
        printf("consonat");
        break;
    case 'g':
        printf("consonat");
        break;
    case 'h':
        printf("consonat");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'j':
        printf("consonat");
        break;
    case 'k':
        printf("consonat");
        break;
    case 'l':
        printf("consonat");
        break;
    case 'm':
        printf("consonat");
        break;
    case 'n':
        printf("consonat");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'p':
        printf("consonat");
        break;
    case 'q':
        printf("consonat");
        break;
    case 'r':
        printf("consonat");
        break;
    case 's':
        printf("consonat");
        break;
    case 't':
        printf("consonat");
        break;
    case 'u':
        printf("vowel");
        break;
    case 'v':
        printf("consonat");
        break;
    case 'w':
        printf("consonat");
        break;
    case 'x':
        printf("consonat");
        break;
    case 'y':
        printf("consonat");
        break;
    case 'z':
        printf("consonat");
        break;
    default:
        printf("Wrong input");
        break;
    }
    return 0;
}