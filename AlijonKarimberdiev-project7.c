/*
Alijon Karimberdiev
U11712009
Project 7

This program sorts the states by percentage of population whose ages are equal or greater than 65.

*/

#include <stdio.h>
#include <string.h>

#define Max_States 100
#define Max_Length 150

struct state
{
    char state_name[Max_States + 1];

    int demographics_one;
    int demographics_two;

    double decimal_one;
    double decimal_two;
    double decimal_three;
};
int largest_num_func(struct state list[], int num);
void sort_states(struct state list[], int num)
{
    struct state temporary;

    int num_large = 0;
    if (num == 1)
        return;

    num_large = largest_num_func(list, num);

    if (num - 1 > num_large)
    {
        temporary = list[num - 1];
        list[num - 1] = list[num_large];
        list[num_large] = temporary;
    }
    sort_states(list, num - 1);
};

int largest_num_func(struct state list[], int numb)
{
    int index = 0;
    int j;
    for (j = 1; j < numb; j++)
    {
        if (list[j].decimal_three < list[index].decimal_three)
            index = j;
    }

    return index;
};

int main()
{
    struct state state_demographics[1 + Max_States];
    int j = 0;
    char first_char[Max_Length + 1] = "sorted_";
    char second_char[Max_Length + 1];
    int i = 0;
    printf("Please, Enter your file: ");
    scanf("%s", second_char);

    FILE *pfile = fopen(second_char, "r");
    if (pfile == NULL)
    {
        printf("There is an error");
        return 1;
    }

    while (!ferror(pfile) && !feof(pfile))
    {
        fscanf(pfile, "%[^,], %d, %d, %lf, %lf, %lf\n", state_demographics[j].state_name,
               &state_demographics[j].demographics_one, &state_demographics[j].demographics_two,
               &state_demographics[j].decimal_one,
               &state_demographics[j].decimal_two,
               &state_demographics[j].decimal_three);

        j++;
    }

    // calling the function

    sort_states(state_demographics, j);

    strcat(first_char, second_char);

    FILE *firstp = fopen(first_char, "w");

    if (firstp == NULL)
    {
        printf("Please, correct an error");
        return 1;
    }

    printf("\nFile name is: %s", first_char);

    while (i < j)
    {

        fprintf(firstp, "%s, %d,%d,%.1f,%.1f,%.1f\n", state_demographics[i].state_name,
                state_demographics[i].demographics_one,
                state_demographics[i].demographics_two,
                state_demographics[i].decimal_one,
                state_demographics[i].decimal_two,
                state_demographics[i].decimal_three);
    }

    fclose(firstp);
    fclose(pfile);
    return 0;
}
