#include <stdio.h>
#include <limits.h>

int recur(int num)
{
    if(num >= 0)
    {
        printf("%d\n", num);
        recur(num + 1);
    }
}

int main(void)
{
    //recur(20);
    printf("%d %d\n",INT_MAX, INT_MAX + 1);
}
