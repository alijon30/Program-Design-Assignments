// Alijon Karimberdiev
// U11712009
// This program finds the symmetric difference between the two sets A and B
#include <stdio.h>
void find_symmetric_difference(int *set_a, int *set_b, int n, int *symmetric_difference)
{

    for (int i = 0; i < n; i++)
    {
        if (set_a[0] != set_b[0])
            symmetric_difference[0] = 1;
        else
            symmetric_difference[0] = 0;
        set_a++;
        set_b++;
        symmetric_difference++;
    }
}
int are_mutually_disjoint(int *set_a, int *set_b, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (set_a[0] == set_b[0])
            return 1;
        set_a++;
        set_b++;
    }
    return 0;
}
int main()
{
    int size_A;
    printf("Enter the number of elements in set A: ");
    scanf("%d", &size_A);

    int A[size_A];
    int set_A[10] = {0};
    printf("Enter the numbers in set A: ");
    int indexA;
    for (int i = 0; i < size_A; i++)
    {
        scanf("%d", &indexA);
        set_A[indexA] = 1;
    }
    int *p = set_A;
    int size_B;
    printf("Enter the number of elements in set B: ");
    scanf("%d", &size_B);
    int indexB;
    int B[size_B];
    int set_B[10] = {0};

    printf("Enter the numbers in set B: ");

    for (int j = 0; j < size_B; j++)
    {
        scanf("%d", &indexB);
        set_B[indexB] = 1;
    }
    int *q = set_B;
    int symmetric_difference[10] = {0};
    int *symmetric_diff = symmetric_difference;
    find_symmetric_difference(p, q, 10, symmetric_diff);
    printf("Output: ");
    if (are_mutually_disjoint(p, q, 10) == 0)
        printf("The two sets are mutually disjoint");
    else
        printf("The two sets are not mutually disjoint");
    printf("\nThe symmetric difference is ");
    int k;

    for (k = 0; k < 10; k++)
    {
        if (symmetric_difference[k] == 1)
            printf(" %d", k);
    }

    return 0;
}