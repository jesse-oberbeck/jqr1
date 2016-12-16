#include <stdio.h>
#include <stdlib.h>

struct Player
{
    int troops;
    int playernum;
};

struct Player * makePlayers(int playernum)
{
    struct Player *players = calloc(sizeof(struct Player), playernum);
    for(int i = 1; i <= playernum; ++i)
    {
        players[i].playernum = i;
        players[i].troops = 20;
    }
    return(players);
}


int main(void)
{
    struct Player *players = makePlayers(4);
    printf("pnum: %d\ntroops: %d\n\n", players[2].playernum, players[2].troops);

}
