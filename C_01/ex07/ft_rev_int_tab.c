#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;

    int temp;
    while (i < size / 2) 
    {
        
        temp = tab[(size - 1) - i];
        tab[(size - 1) - i] = tab[i];
        tab[i] = temp;
        i++;
    }
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8 , 9 };
    int *tab = arr;
    int i = 0;
    ft_rev_int_tab(tab, 10);
    while (i < 10)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}
