/*
Alijon Karimberdiev
U11712009 
Problem 2 of project 5
This program checks whether the command-line argument is in order or not
*/

#include <stdio.h>
#include <ctype.h>

int in_order(char *word)
{
    int lowchar;
    int upperchar;
    int digit;
    lowchar = upperchar = digit = 0;

    char *pointerA, *pointerB;
    pointerA = word;
    pointerB = word;

    int checking_param = 1;
    pointerB = pointerA + 1;

    while (*pointerB != '\0')
    {
        if (isdigit(*pointerA))
        {
            digit = 1;
            break;
        }
        if (isupper(pointerA))
            *pointerA = tolower(*pointerA);
        if (isupper(pointerB))
            *pointerB = tolower(*pointerB);

        if (pointerA > pointerB)
        {
            checking_param = 0;
            break;
        }
        pointerA++;
        pointerB++;
    }
    if ((checking_param != 0) || digit)
        return 0;
    else
        return 1;
}

int main(int param1, char *param2[])
{
    int check;
    if (param1 == 2)
    {
        check = in_order(param2[1]);

        if (check)
            printf("Output: In order");
        else
            printf("Output: Not in order");
    }
    else
        printf("Output: Incorrect number of arguments. Usage: ./a.out word");

    return 0;
}
