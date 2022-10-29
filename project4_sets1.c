// Alijon Karimberdiev
// U11712009
// This program finds the differences of elements in sets A and B.
// Basically, it finds whether the elements in set A are present in set B or not.
#include <stdio.h>
void find_set_difference(int *set_a, int *set_b, int n, int *set_difference);
int main()
{
    int size_A;
    int set_A[10] = {0};
    int set_B[10] = {0};
    int set_difference[10] = {0};
    int *set_diff = set_difference;
    printf("Enter the number of elements in set A: ");
    scanf("%d", &size_A);

    printf("Enter the numbers in set A: ");
    int i;
    int indexA;
    for (i = 0; i < size_A; i++)
    {

        scanf("%d", &indexA);
        set_A[indexA] = 1;
    }
    int *p = set_A;
    int size_B;
    printf("Enter the number of lements in set B: ");
    scanf("%d", &size_B);

    printf("Enter the numbers in set B: ");

    int indexB;
    for (int j = 0; j < size_B; j++)
    {
        scanf("%d", &indexB);
        set_B[indexB] = 1;
    }
    int *q = set_B;

    find_set_difference(p, q, 10, set_diff);
    printf("Output:");
    printf("\nSet difference A - B:");

    int k;
    for (k = 0; k < 10; k++)
    {
        if (set_difference[k] == 1)
            printf(" %d", k);
    }
    return 0;
}
void find_set_difference(int *set_a, int *set_b, int n, int *set_difference)
{

    int i = 0;
    while (i < n)
    {
        if (set_a[0] == 1 && set_b[0] == 0)
        {
            set_difference[0] = 1;
        }
        else
        {
            set_difference[0] = 0;
        }
        set_difference += 1;
        set_a += 1;
        set_b += 1;
        i++;
    }
}