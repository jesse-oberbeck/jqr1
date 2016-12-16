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

void load(struct Country *countryArray, int numCountries)
{
    int width = 15;
    for(int i = 0; i < numcountries; ++i)
    {
        int y = countryArray[index].y;
        int x = countryArray[index].x;
        printf("%d\%d\n", x, y);



        for(int yi = 0; yi <= width)
        {
            for(int xi = 0; xi <= width)
            {
                if((yi == y) && (xi == x))
                {
                    printf("X");
                }
                else
                {
                    printf("~");
                }
            }
        }




    }

}
