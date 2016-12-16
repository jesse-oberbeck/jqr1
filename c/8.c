#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 20; ++i)
    {
        if(i % 3 == 0)
        {
            printf("%d\n",i);
        }

        else if(i % 2 == 0)
        {
            printf("EVEN\n");
        }
        else
        {
            puts("else");
        }

    }
}
