#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j = 1;
    int temp;
    while (i < size)
    {
        while (j < size)
        {
            if (tab[j - 1] > tab[j])
            {
                temp = tab[j];
                tab[j] = tab[j - 1];
                tab[j - 1] = temp;
            }
            j++;
        }
        j = 1;
        i++;
    }
}

int main()
{
    int arr[10] = {1, 5, 83, 56, 60, 38, 42, 7, 25, 9};
    int *tab = arr;
    int i = 0;
    ft_sort_int_tab(tab, 10);
    while (i < 10)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}