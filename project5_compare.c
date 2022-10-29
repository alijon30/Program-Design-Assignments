// Alijon Karimberdiev
// U11712009
// This program compares two string inputs lexicographically
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int compare(char *s1, char *s2);
int read_line(char *str, int n);

int main()
{
    // Here we will define the input length to be 500 as the max as per requirement is 1000, given two strings of length 500, there would be 1000 max characters
    int INPUT_LENGTH = 500;
    // Here we will get the input string one characters
    char first_String[INPUT_LENGTH];
    printf("Enter first string: ");
    int input;
    input = read_line(first_String, INPUT_LENGTH);
    // Here we will get the input string two characters
    char second_String[INPUT_LENGTH];
    printf("Enter second string: ");
    int input2;
    input2 = read_line(second_String, INPUT_LENGTH);

    // Here we will call compare function to get the final result
    printf("Output: %d", compare(first_String, second_String));

    return 0;
}
int read_line(char *str, int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            *str++ = ch;
            i++;
        }
    }
    *str = '\0'; /* terminates string */
    return i;    /* number of characters stored */
}
int compare(char *s1, char *s2)
{

    char *p1;
    char *p2;

    for (p1 = s1, p2 = s2; *p1 != '\0', *p2 != '\0'; p1++, p2++)
    {
        char s1_char = tolower(*p1);
        char s2_char = tolower(*p2);

        if (s1_char < s2_char)
        {
            return -1;
        }
        else if (s1_char > s2_char)
        {
            return 1;
        }
    }
    return 0;
}