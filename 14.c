#include <stdio.h>

int recur(int num)
{
    if(num >= 0)
    {
        printf("%d\n", num);
        recur(num - 1);
    }
}

int main(void)
{
    recur(20);
}
