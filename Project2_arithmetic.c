// Alijon Karimberdiev
// U11712009
// This program is created to perform certain operations entered as input by the tester

#include <stdio.h>
#include <ctype.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    char ch;
    int operation_char = 0;
    int filled = 0;
    printf("Enter Output: ");
    // following while loop is built to get the values and accordingly determine what character is first num, what is second and what is operation character
    while ((ch = getchar()) != "\n")
    {
        // this if statement helps us skip blank space
        if (ch == 32)
            continue;
        // this filled variable helps us take no furher action once all the variables are found
        if (filled == 3)
            break;

        if (isdigit(ch))
        {
            if (num1 == 0)
            {
                num1 = ch - 48;
            }
            else if (num2 == 0)
            {
                num2 = ch - 48;
            }
        }
        else
        {
            operation_char = ch;
        }

        filled++;
    }
    int ans = 0;
    switch (operation_char)
    {
    case 42:
        ans = num1 * num2;
        break;
    case 43:
        ans = num1 + num2;

        break;

    case 45:
        ans = num1 - num2;
        break;
    default:
        printf("\nOutput: unrecognized operator");
        return 1;
    }
    printf("\nOutput: %d", ans);

    return 0;
}
