#include <stdio.h>

// harf mi
int ft_is_letter(char *str, int n)
{
    if ((str[n] >= 65 && str[n] <= 90) || (str[n] >= 97 && str[n] <= 122))
    {
        return 1;
    }
    return 0;
}
int ft_is_lower(char *str, int n)
{
    // eger harf mi den gelen deger 1 ise kucuk harf olup olmadigini kontrol et
    if (ft_is_letter(str, n) == 1)
    {
        // kucuk harf ise 1 dondur
        if (str[n] >= 97 && str[n] <= 122)
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }   
}
//  kelimenin ilk harfi mi kontrol et
int ft_is_fletter(char *str, int n)
{
    // harf kucuk mu den gelen deger 1 ise
    if (ft_is_lower(str, n) == 1)
    {
        //  harf kucuk ve onceki karakter harf degilse 1 dondur
        if (!((str[n - 1] >= 65 && str[n - 1] <= 90) || (str[n - 1] >= 97 && str[n - 1] <= 122)))
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
    
}

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        // eger harf ilk harf ve kucuk harf ise 32 eksilt yani buyuk harf yap (ASCII tablosu)
        if (ft_is_fletter(str, i) == 1)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}

int main()
{
    char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char *str = string;
    printf("%s", ft_strcapitalize(str));
}
