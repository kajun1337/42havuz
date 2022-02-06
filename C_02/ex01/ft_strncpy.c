#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    int j = 0;
    while (src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    // string okuttugunda \0 i gorunce bitirdigi icin sonuna bunu koyuyoruz
    dest[j] = '\0';
    return dest;
}
// unsigned negatif deger almiyor
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    while (i < 10)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char dest[20];
    char src[50];
    ft_strcpy(src, "Merhaba Turkiye Selam");
    ft_strncpy(dest, src, 10);
    printf("%s", dest);
}