#include <stdio.h>

// Function to count the number of vowels in a string
int countVowels(char *str)
{
    int count = 0;

    // Loop through the string until we reach the end
    while (*str != '\0')
    {

        // Check if the current character is a vowel
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {

            // Increment the vowel count if the current character is a vowel
            count++;
        }

        // Move to the next character in the string
        str++;
    }

    // Return the total vowel count
    return count;
}

int main()
{
    char str[] = "Hello, World!";

    // Call the countVowels function to get the number of vowels in the string
    int result = countVowels(str);

    // Print the number of vowels
    printf("Number of vowels: %d\n", result);

    return 0;
}
