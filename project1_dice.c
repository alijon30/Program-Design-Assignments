// Alijon Karimberdiev
// U11712009
// This dice program is created to simulate a dice game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // these two variables are used to define the possible random numbers of two players
    int num1, num2;
    srand(time(NULL));
    // greatest number is set to be 6 and the lowest to be 1
    int upper = 6;
    int lower = 1;
    // This following winner variable is defined to pinpoint the winner.
    int winner;
    num1 = (rand() % (upper - lower + 1)) + lower;
    num2 = (rand() % (upper - lower + 1)) + lower;

    if (num1 > num2)
    {
        winner = 1;
        printf("Player 1's number is %d, Player 2's number is %d. Player %d wins!", num1, num2, winner);
    }
    else if (num1 < num2)
    {
        winner = 2;
        printf("Player 1's number is %d, Player 2's number is %d. Player %d wins!", num1, num2, winner);
    }
    else
    {
        printf("Player 1's number is %d, Player 2's number is %d. No winner!", num1, num2);
    }

    return 0;
}
