#include <stdio.h>

void simple_array_print(int *ptr, int size)
{
    short i = 0;
    while (i < (size / sizeof(ptr[0])))
    {
        printf("Addres: 0x%p, Value: %d, index: %d\n", ptr, (*ptr), i);
        i++;
        ptr += 1;
    }
}

int main(void)
{
    int a = 44, b = 12, c = 36, d = 94, e = 75;
    simple_array_print(&a, sizeof(a) * 5);
    return 0;
}
