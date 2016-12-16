#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = 1;
    float b = 2.2;
    double c = 3.3;
    long d = 4.4;
    char *string = "String!";
    char character = 'c';


    int x = 5;
    int y = 6;


    printf("int: %d\nfloat: %f\ndouble: %lf\nlong: %ld\nstring: %s\ncharacter: %c\n", a, b, c, d, string, character);

    puts("");

    printf("add: %d\nsub: %d\nmult: %d\ndiv: %d\nmod:%d\n", x + y, x - y, x * y, x / y, x % y);

    printf("PEMDAS: %f\n", pow((((6 + 7) * 4) / 6), 2));

}
