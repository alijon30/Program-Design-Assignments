// Alijon Karimberdiev
// U11712009
//  This dice program is created to simulate a dice game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(NULL));
    int rounds;
    printf("Enter the number of rounds: ");
    scanf("%d", &rounds);
    // greatest number is set to be 6 and the lowest to be 1
    int upper = 6;
    int lower = 1;

    // This following winner variable is defined to pinpoint the winner.
    int player_one_score = 0;
    int player_two_score = 0;
    int draw;
    // these two variables are used to define the possible random numbers of two players
    int num1, num2;
    int i, winner;
    for (i = 0; i < rounds; i++)
    {

        num1 = (rand() % (upper - lower + 1)) + lower;
        num2 = (rand() % (upper - lower + 1)) + lower;

        if (num1 > num2)
        {
            player_one_score++;
        }
        else if (num1 < num2)
        {
            player_two_score++;
        }
        else
        {
            draw++;
        }
        printf("\nRound %d: Player 1's number is %d, Player 2's number is %d", i + 1, num1, num2);
    }
    if (player_one_score > player_two_score)
        winner = 1;
    else if (player_one_score < player_two_score)
        winner = 2;
    else
        winner = 0;

    if (winner == 1)
    {
        printf("\nWinner is Player %d", winner);
    }
    else if (winner == 2)
    {
        printf("\nWinner is Player %d", winner);
    }
    else
        printf("\nIt's a draw");

    return 0;
}
