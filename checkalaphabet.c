#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("Vowel");
        break;
    case 'e':
    case 'E':
        printf("Vowel");
        break;
    case 'i':
    case 'I':
        printf("Vowel");
        break;
    case 'o':
    case 'O':
        printf("Vowel");
        break;
    case 'u':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }

    return 0;
}