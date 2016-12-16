#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 20; ++i)
    {

        switch(i)
        {
            case 1:
                puts("one");
                break;
            case 2:
                puts("two");
                break;
            case 3:
                puts("three");
                break;
            default:
                printf("%d\n", i);
                break;
        }
    }

}
