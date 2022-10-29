// Alijon Karimberdiev
// U11712009
// This program is created to perform certain operations entered as input by the tester

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{

    if (argc < 4)
    {
        printf("Incorrect number of arguments");
        return -1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char operation_char = argv[2][0];

    int ans = 0;
    switch (operation_char)
    {
    case '*':
        ans = num1 * num2;
        printf("\nOutput: Multiplication is %d", ans);
        break;
    case '+':
        ans = num1 + num2;
        printf("\nOutput: Addition is %d", ans);
        break;

    case '-':
        ans = num1 - num2;
        printf("\nOutput: Subtraction is %d", ans);
        break;
    default:
        printf("\nOutput: unrecognized operator");
        return 1;
    }
    return 0;
}