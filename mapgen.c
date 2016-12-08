#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Country
{
    int coord1;
    int coord2;
    int troops;
};

int main(void)
{
    int flag1 = 0;
    int flag2 = 0;
    int countrynum = 1;
    srand(time(NULL) + clock());
    int chance = rand() % 20;
    int chance2 = rand() % 30;
    int repeat = 0;
    

    int width = 15;
    char coords[width][width];
    for(int i = 0; i <= width; ++i)
    {
        chance = rand() % 20;
        chance2 = rand() % 30;
    
        while(repeat < 4)
        {
            for(int i = 0; i <= width; ++i)
            {
                if(i == chance)
                {
                    flag1 = 1;
                    printf("%02d##%02d", countrynum, countrynum);
                }
                if(i == chance2)
                {
                    flag2 = 1;
                    if(chance <= 15)
                    {
                        printf("%02d##%02d", countrynum + 1, countrynum + 1);
                    }
                    else
                    {
                        printf("%02d##%02d", countrynum, countrynum);
                    }
                }

                else
                {
                printf("%s", "~~~~");
                }
            }
        ++repeat;
        puts("");
        }
    if(flag1 || flag2)
    {
        countrynum = countrynum + flag1 + flag2;
    }
    repeat = 0;
    flag1 = 0;
    flag2 = 0;
    
    }
    printf("Number of Countries: %d\n", countrynum - 1);
}

/*
random from 0-56,
every 4th line.

if flag print 4 x, 
else print 4 '.'
*/
