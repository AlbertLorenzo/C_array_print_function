#include <stdio.h>

void fnt(int *p, int s)
{
    short i = 0;
    const int n = (s / sizeof((*p)));
    while (i < n)
    {
        printf("Addres: %p, value: %d, index: %d\n", p, (*p), i);
        i++;
        p += 1;
    }
}

int main(void)
{
    int a = 44, b = 12, c = 36, d = 94, e = 75;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);
    fnt(&a, sizeof(int) * 5);
    return 0;
}
