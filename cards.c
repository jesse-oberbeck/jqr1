#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Card
{
    int country;
    int unit; //Using 1, 2, and 3 to represent infantry, cavalry, and artillery.
};

int main(void)
{
//Generate cards

    srand(time(NULL) + clock());
    struct Card deck[24];
    int total = 24;

    for(int i2 = 0; i2 <= total; ++i2)
    {
        deck[i2].country = i2;
        int unit = random() % 3 + 1;
        deck[i2].unit = unit;
        //printf("C: %d\nU: %d\n\n", i2, unit);
    }


}
