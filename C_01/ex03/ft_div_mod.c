#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    int result = a / b;
    int remain = a % b;
    // burda gidipte div = &result falan diyemeyiz oyle adres degisemez
    if (b != 0)
    {
        *div = result;
        *mod = remain;
    }
}

int main()
{
    int a = 50;
    int b = 3;
    int div;
    int mod = 0;
    int *p1 = &div;
    int *p2 = &mod;
    ft_div_mod(a, b, p1, p2);
    printf("%d\n", *p1);
    printf("%d", *p2);
}
