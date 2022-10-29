// Alijon Karimberdiev
// U11712009
// This program removes the smallest k elements in the array and then returns the array with updated values
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements in set A: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the numbers in set A: ");
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int k;
    printf("Enter the number of smallest elements to be removed: ");
    scanf("%d", &k);
    // Here we will find smalles number's index
    int find_smallest_index(int a[], int n)
    {
        int smallest_val = a[0];
        int smallest_index = 0;
        int i;
        for (i = 1; i < n; i++)
        {
            if (a[i] < smallest_val)
            {
                smallest_index = i;
                smallest_val = a[i];
            }
        }

        return smallest_index;
    }

    // Here we will remove the smallest number and then shift values to the left
    int remove_smallest_numbers(int a[], int n, int k)
    {

        int smallest_index;
        smallest_index = find_smallest_index(a, n);

        int i = smallest_index;

        for (; i < n; i++)
        {
            a[i] = a[i + 1];
        }

        return n - 1;
    }
    int new_len;
    while (k > 0)
    {
        new_len = remove_smallest_numbers(array, n, k);
        n = new_len;
        k -= 1;
    }

    int in;
    printf("Output:");
    for (in = 0; in < new_len; in++)
    {
        printf(" %d", array[in]);
    }

    return 0;
}
