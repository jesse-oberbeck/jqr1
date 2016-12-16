#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int check = 0;

    if(argc > 1)
    {
        check = strtol(argv[1], NULL, 10);
    }

    if(check != 0)
    {
        puts("valid input");
    }

}
