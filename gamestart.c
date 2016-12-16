#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Clears the buffer, just like it says.*/
void clear_buffer(void)
{
    while(getchar() != '\n');
}



int rollDice(int dieCount)
{
    int total = 0;
    for(int i = 0; i < dieCount; ++i)
    {
        srand(time(NULL) + clock());
        int die = rand() % 6 + 1;
        total += die;
    }
    return(total);
}


struct Player
{
    int troops;
    int playernum;
};



struct Player * makePlayers(int playernum)
{
    struct Player *players = calloc(sizeof(struct Player), playernum);
    for(int i = 1; i < playernum; ++i)
    {
        players[i].playernum = i;
        players[i].troops = 20;
    }
    return(players);
}


int main(void)
{

    puts("___     ___ ");
    puts("|  \\ | /    | /");
    puts("|  / | \\__  |/");
    puts("|-\\  |    \\ |\\");
    puts("|  \\ | ___/ | \\ ...kinda.\n\n");
    
    puts("1. New Game");
    puts("2. Load Game (not working yet)\n");
    printf("Enter the number for your selection: ");
    char playerSelection = getc(stdin);
    clear_buffer();
    int choiceNum = strtol(&playerSelection, NULL, 10);
    if(choiceNum == 0)
    {
        fprintf(stderr, "Numeric selection required.\n\n");
        main();
    }

    if(choiceNum == 1)
    {
        printf("Enter number of players: ");
        char playerSelection = getc(stdin);
        clear_buffer();
        int numPlayers = strtol(&playerSelection, NULL, 10);
        struct Player *players = makePlayers(numPlayers);
        printf("pnum: %d\ntroops: %d\n\n", players[2].playernum, players[2].troops);
        printf("die roll: %d\n", rollDice(2));
    free(players);
    }



}


