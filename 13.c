#include <stdio.h>

int addone(int num)
{
    return(num + 1);
}

int inbetween(int num)
{
    return(addone(num));
}

int main(void)
{
    printf("%d\n", inbetween(1));
}
