// Alijon Karimberdiev
//  U 11712009

// This program determines whether the input values within the array match the parities or not.

//
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int array[n];
    // we will get the values of array
    printf("\nEnter the elements of the array: ");
    int i;

    for (i = 0; i < n; i += 1)
    {
        scanf("%d", &array[i]);
    }

    // here, we will check whether the values match or not
    int j;
    int number_of_matches;
    for (j = 0; j < n; j += 1)
    {
        if (j % 2 == 0 && array[j] % 2 == 0)
        {
            number_of_matches++;
        }
        else if (j % 2 == 1 && array[j] % 2 == 1)
        {
            number_of_matches++;
        }
    }
    // here we will check if the number of matches equals n or not, if it does not, we will return false otherwise True
    if (number_of_matches == n)
    {
        printf("\nOutput: parities of elements match parities of indices");
    }
    else
    {
        printf("\nOutput: parities of elements do not match parities of indices");
    }

    return 0;
}
