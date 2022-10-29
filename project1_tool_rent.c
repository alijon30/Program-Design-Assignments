// Alijon Karimberdiev U11712009
#include <stdio.h>

int main()
{
    int choice, hours, total;
    int remaining_hours;
    printf("Please select from the following menu: 1. Electric Pressure Washer, 2. Commercial Carpet Extractor, 3. Battery Powered Chainsaw, 4. Drain Cleaner");
    printf("\nEnter Tool selection: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > 4)
    {
        printf("Invalid input. The input should be in the range of 1 to 4.");
        return 1;
    }
    printf("Enter hours rented: ");
    scanf("%d", &hours);
    // this part of the program checks the input choice and accordingly makes calculations based on that
    if (choice == 1)
    {
        // if hours in the range of 4 and 24, total will be calculated according to the following
        if (hours > 4 && hours < 24)
        {
            total = 28 + (hours - 4) * 4;
            if (total > 41)
            // if total is more than daily max fee which is 41, we still need to assign it to daily max even though the total could be more than daily max
            {
                total = 41;
            }
        }
        else if (hours < 4)
        {
            total = 28;
        }
        else if (hours > 24)
        {
            total = 41 * (hours / 24);

            if ((hours % 24) > 10)
            {
                total = total + 41;
            }
            else
            {
                total = total + (hours % 24) * 4;
            }
        }
    }
    else if (choice == 2)
    {
        if (hours > 4 && hours < 24)
        {
            total = 25 + (hours - 4) * 3;
            if (total > 35)
            {
                // if total is more than daily max fee which is 41, we still need to assign it to daily max even though the total could be more than daily max
                total = 35;
            }
        }
        else if (hours < 4)
        {
            total = 25;
        }
        else if (hours > 24)
        {
            total = 35 * (hours / 24);

            if ((hours % 24) > 10)
            {
                total = total + 35;
            }
            else
            {
                total = total + (hours % 24) * 3;
            }
        }
    }
    else if (choice == 3)
    {
        if (hours > 4 && hours < 24)
        {
            total = 32 + (hours - 4) * 5;
            if (total > 48)
            {
                // if total is more than daily max fee which is 41, we still need to assign it to daily max even though the total could be more than daily max
                total = 48;
            }
        }
        else if (hours < 4)
        {
            total = 32;
        }
        else if (hours > 24)
        {
            total = 48 * (hours / 24);

            if ((hours % 24) > 10)
            {
                total = total + 48;
            }
            else
            {
                total = total + (hours % 24) * 5;
            }
        }
    }
    else if (choice == 4)
    {
        if (hours > 4 && hours < 24)
        {
            total = 51 + (hours - 4) * 6;
            if (total > 78)
            {
                // if total is more than daily max fee which is 41, we still need to assign it to daily max even though the total could be more than daily max
                total = 78;
            }
        }
        else if (hours < 4)
        {

            total = 51;
        }
        else if (hours > 24)
        {
            total = 78 * (hours / 24);

            if ((hours % 24) > 10)
            {
                total = total + 78;
            }
            else
            {
                total = total + (hours % 24) * 6;
            }
        }
    }
    printf("Amount due ($): %d", total);
    return 0;
}
