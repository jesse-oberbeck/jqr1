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

void load(struct Country *countryArray)
{

    int index = 1;
    
    while(index < 18)
    {
        int y = countryArray[index].y;
        int x = countryArray[index].x;
        printf("%d / %d\n", x, y);
        ++index;
    }

}

int main(void)
{
    int flag1 = 0;
    int flag2 = 0;
    int countrynum = 0;
    srand(time(NULL) + clock());
    int chance = rand() % 20;
    int chance2 = rand() % 30;
    int repeat = 0;
    

    int width = 15;
    char coords[width][width];
    struct Country *countryArray = calloc(64, 8);

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

                        ++countrynum;

                        printf("C:%02d", countrynum);
                        countryArray[countrynum].y = i;
                        countryArray[countrynum].x = i2;
                        countryArray[countrynum].troops = 42;
                        countryArray[countrynum].owner = 0;
                    }
                    if(i2 == chance2)
                    {
                        flag2 = 1;

                        ++countrynum;

                        
                        printf("C:%02d", countrynum);
                        countryArray[countrynum].y = i;
                        countryArray[countrynum].x = i2;
                        countryArray[countrynum].troops = 44;
                        countryArray[countrynum].owner = 0;
                        
                    }
                    else
                    {
                    printf("%s", "~~~~");
                    }
                }
///////////////////////////////////////////////////

                else if(repeat == 1)
                {
                    if(i2 == chance)
                    {
                        printf("O:%02d", countryArray[countrynum].owner);
                    }
                    if(i2 == chance2)
                    {
                        printf("O:%02d", countryArray[countrynum].owner);

                    }
                    else
                    {
                    printf("%s", "~~~~");
                    }
                }


                else if(repeat == 2)
                {
                    if(i2 == chance)
                    {
                        printf("T:%02d", countryArray[countrynum].troops);
                    }
                    if(i2 == chance2)
                    {
                        printf("T:%02d", countryArray[countrynum].troops);

                    }
                    else
                    {
                    printf("%s", "~~~~");
                    }
                }


                else if(repeat == 3)
                {
                    if(i2 == chance)
                    {
                        printf("####");
                    }
                    if(i2 == chance2)
                    {
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

    repeat = 0;
    flag1 = 0;
    flag2 = 0;
    
    }
    printf("Number of Countries: %d\n", countrynum - 1);
    load(countryArray);
}

/*
random from 0-56,
every 4th line.

if flag print 4 x, 
else print 4 '.'
*/
