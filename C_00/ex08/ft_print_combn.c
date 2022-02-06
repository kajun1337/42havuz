#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void yazdir(int arr[], int n)
{
    int j = 0;
    while (j < n)
    {
        ft_putchar(arr[j] + '0');
        j++;
    }
}
// 012 013 019 023
int get_index(int arr[], int n)
{

    int c = 0;
    int max = 10 - n; // 10-n ilk sayinin alabilecegi maks deger mesela n=3 iken 100 ler basamagi en fazla 789 dan 7 olabilir n=4 iken 6789 dan 6 olabilir en fazla
    while (c < n)     //012
    {
        if (arr[c] == max)
        {
            return (c - 1);
        }

        if (arr[c] == c && arr[c] < max)
        {

            return c;
        }
        max++;
    }
}
// 012 013 019 028 089
int max_kontrol(int arr[], int n)
{
    int c = 0;
    int max = 10 - n;

    while (c < n)
    {
        if (arr[c] == max)
        {
            return (c - 1);
        }
        if (c>max)
        {
            return c;
        }
        c++;
        max++;
    }
    return -1;
}

void ft_print_combn(int n)
{
    int i = 0;
    int arr[n];
    while (i < n)
    {
        arr[i] = i;
        i++;
    }
    int index;
    while (get_index(arr, n) != -1)
    {
        index = get_index(arr, n);
        yazdir(arr, n);
        arttir(arr, n, 1);
    }
}

int main()
{
    ft_print_combn(2);
}
