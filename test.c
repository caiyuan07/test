#include <stdio.h>

void add(int a, int b, int *c);

int main()
{
    int a = 3;
    int b = 4;
    int c;
    add(a, b, &c);
    printf("a + b = %d + %d = %d\n", a, b, *c);
    printf("hello world!\n");
    return 0;
}

void add(int a, int b, int *c)
{
    *c = a + b;
}
