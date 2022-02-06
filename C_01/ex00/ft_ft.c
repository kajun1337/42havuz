#include<stdio.h>
// pointerin degerini 42 yap
void ft_ft(int *nb)
{
    *nb = 42;
}

int main()
{
    int x = 0;
    int *p = &x;
    ft_ft(p);
    //printf("%d",*p);
    printf("%x",p);
    return 0;
}
