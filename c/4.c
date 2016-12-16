#include <stdio.h>
int main(void)
{
    int integer = 6;
    int *integerPointer = &integer;
    int integer2 = *integerPointer;
    printf("%d\n", integer);
}
