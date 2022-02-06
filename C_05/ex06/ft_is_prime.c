int ft_is_prime(int nb)
{
    int kontrol;
    int i;

    kontrol = 0;
    i = 2;
    if (nb == 0 || nb == 1)
        return (0);
    while (i <= nb)
    {
        if (nb % i == 0)
            kontrol += i;
        i++;
    }
    if (kontrol == nb)
        return (1);
    else
        return (0);
}

int main()
{
    printf("%d",ft_is_prime(59));
    return (0);
}