#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("Ctester.txt", "ab+");
    char c;
    while(c = getc(file))
    {
        if(c == EOF)
        {
            break;
        }
        putchar(c);
    }
    if(file)
    {
        fclose(file);
    }
    //File had to be closed and opened to in order to be overwritten, rather than added to.
    FILE *file2 = fopen("Ctester.txt", "w");
    fwrite("contents replaced\n\n", 1, 20, file2);
}
