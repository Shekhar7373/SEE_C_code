#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome using pointers
int isPalindrome(char *str)
{
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;

    while (start < end)
    {
        if (*start != *end)
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1; // All characters match, so it's a palindrome
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    gets(input);

    // Check if the input string is a palindrome
    if (isPalindrome(input))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
