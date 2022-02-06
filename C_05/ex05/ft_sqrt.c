#include<stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    while (i <= nb )
    {
        if (i * i == nb)
            return (i);
        i++;    
    }
        return (0);   
}

int main()
{
    printf("%d",ft_sqrt(1));
}