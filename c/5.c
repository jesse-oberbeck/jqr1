//Arrays are best used as a static item, and pointers can more easily be dynamic. However, both are essentially addresses to sets of items.

#include <stdio.h>

int main(void)
{
    int intarray[5] = {0};
    int arrayofintarrays[2][5] = {0};
    for(int i = 0; i < 2; ++i)
    {
        for(int i2 = 0; i2 < 5; ++i2)
        printf("%d\n", arrayofintarrays[i][i2]);
    }
}
