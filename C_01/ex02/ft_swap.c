#include <stdio.h>

void ft_swap(int *a, int *b) // 10 60
{
    int temp;
    temp = *a; //10
    *a = *b;
    *b = temp;
}

int main()
{
    int s1 = 10;
    int s2 = 20;
    int *p1;
    int *p2;
    p1 = &s1;
    p2 = &s2;
    printf("%d\n", s1);
    printf("%d\n", s2);
    ft_swap(p1, p2);
    printf("%d\n", s1);
    printf("%d\n", s2);
}