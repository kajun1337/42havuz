#include<stdio.h>
/*
   Sirayla bunlari yapiyo 
   f(4) => f(3) * 4
   f(3) => f(2) * 3 
   f(2) => f(1) * 2
   f(1) => 1
*/

int ft_recursive_factorial(int nb)
{
    if(nb == 0 || nb == 1)
        return (1);
    return (ft_recursive_factorial(nb - 1) * nb); 
}

int main()
{
    printf("%d",ft_recursive_factorial(6));
}

