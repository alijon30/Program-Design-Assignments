/*
Alijon Karimberdiev
U11712009
Problem 1 of Project 5
This program checks whether the given input is multiplication of 11 or not
*/

#include <stdio.h>
#define size 1000
int f(char a[size]);
int main()
{

    char array2[size];
    char l;
    int i;
    i = 0;
    printf("Enter the value of X: ");
    while (i < (size - 1) && l != '\n')
    {
        l = getchar();
        array2[i] = l;
        i++;
    }

    l == '\n';
    array2[i] = '\0';

    if (f(array2))
        printf("\n %s is a multiple of 11", array2);
    else
        printf("%s is not a multiple of 11", array2);
    return 0;
}
int f(char a[size])
{
    int i;
    int even_nums = 0, odd_nums = 0;
    i = 0;

    while (a[i + 1] != '\0')
    {
        if ((i + 1) % 2 == 0)
            even_nums += (a[i] - '0');
        else
            odd_nums += (a[i] - '0');
        i++;
    }
    return (odd_nums - even_nums) % 11 == 0;
}