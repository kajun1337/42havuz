#include<stdio.h>
#include<unistd.h>
/*
* argc => girilen arguman sayisi (arg counter)

* argv => girilen argumanlar (arg vektor) char *argv[] ya da char **argv  

* argv[0] => programin dizinini veriyo yani PATH

* dosyayi calistirirken ./a.out arg1 arg2 arg3 dedigim zaman argv[1] = arg1, argv[2] = arg2 diye    gidiyo
*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}


int     main(int argc, char **argv)
{
    ft_putstr(argv[0]);
    
    return(0);  
}