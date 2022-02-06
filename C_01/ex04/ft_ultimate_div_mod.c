#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)
    {
        int div = *a / *b;
        int mod = *a % *b;
        *a = div;
        *b = mod;
    }
}

int main()
{
    int a, b;
    a = 50;
    b = 3;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    ft_ultimate_div_mod(p1, p2);
    printf("%d\n", *p1);
    printf("%d", *p2);
}