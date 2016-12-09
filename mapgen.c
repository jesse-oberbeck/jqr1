#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Country
{
    int y;
    int x;
    int owner;
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
    struct Country countryArray[64];

    for(int i = 0; i <= width; ++i)
    {
        chance = rand() % 20;
        chance2 = rand() % 30;
    
        while(repeat < 4)
        {
            for(int i2 = 0; i2 <= width; ++i2)
            {
////////////////////////////////////////////////

                if(repeat == 0)
                {
                    if(i2 == chance)
                    {
                        flag1 = 1;
                        printf("C:%02d", countrynum);
                        countryArray[countrynum].y = i;
                        countryArray[countrynum].x = i2;
                        countryArray[countrynum].troops = 0;
                        countryArray[countrynum].owner = 0;
                    }
                    if(i2 == chance2)
                    {
                        flag2 = 1;
                        if(chance <= 15)
                        {
                            printf("C:%02d", countrynum + 1);
                            countryArray[countrynum].y = i;
                            countryArray[countrynum].x = i2;
                            countryArray[countrynum].troops = 0;
                            countryArray[countrynum].owner = 0;
                        }
                        else
                        {
                            printf("C:%02d!", countrynum);
                            countryArray[countrynum].y = i;
                            countryArray[countrynum].x = i2;
                            countryArray[countrynum].troops = 0;
                            countryArray[countrynum].owner = 0;
                        }
                    }
                    else
                    {
                    printf("%s", "~~~~");
                    }
                }
///////////////////////////////////////////////////

                if(repeat == 1)
                {
                    if(i2 == chance)
                    {
                        flag1 = 1;
                        printf("O:%02d", countryArray[countrynum].owner);
                    }
                    if(i2 == chance2)
                    {
                        flag2 = 1;
                        printf("O:%02d", countryArray[countrynum].owner);

                    }
                    else
                    {
                    printf("%s", "~~~~");
                    }
                }


                if(repeat == 2)
                {
                    if(i2 == chance)
                    {
                        flag1 = 1;
                        printf("T:%02d", countryArray[countrynum].troops);
                    }
                    if(i2 == chance2)
                    {
                        flag2 = 1;
                        printf("T:%02d", countryArray[countrynum].troops);

                    }
                    else
                    {
                    printf("%s", "~~~~");
                    }
                }


                if(repeat == 3)
                {
                    if(i2 == chance)
                    {
                        flag1 = 1;
                        printf("####");
                    }
                    if(i2 == chance2)
                    {
                        flag2 = 1;
                        printf("####");

                    }
                    else
                    {
                    printf("%s", "~~~~");
                    }
                }
            }

////////////////////////////////////////////////////
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
