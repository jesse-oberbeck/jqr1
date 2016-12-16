#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 20; ++i)
    {
        printf("%d\n",i);
    }

    int i = 20;
    while(i <= 40)
    {
        printf("%d\n",i);
        ++i;
    }

    do
    {
        printf("%d\n", i);
        ++i;
    }
    while(i < 20);

}
