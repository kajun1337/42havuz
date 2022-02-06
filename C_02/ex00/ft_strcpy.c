#include <stdio.h>
// ikinci paramtere birinci parametrenin içine kopyalanicak char pointer donucek geriye
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

int main()
{
    // arr1 uzunlugu arr2 den buyuk olmasi lazim yoksa olmuyor 
    char arr1[] = "Merhaba";
    char arr2[] = "Helloo";
    char *dest = arr1;
    char *src = arr2;
    char *ptr = ft_strcpy(dest, src);
    printf("%s", ptr);

    return 0;
}