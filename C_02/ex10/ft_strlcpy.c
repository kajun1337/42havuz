#include <stdio.h>

// src yi deste kopyaliyo ama dest src ile tamamen ayni oluyo ve geriyede srcnin karakter uzunlugunu donduruyo ama mesela "Hello" ise 5 donduruyo normalde uzunluk 6 null da oldugu icin ama sadece karakterler sayiliyo
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    // "Hello"
    // size 6 null da sayiliyo
    unsigned int count;
    unsigned int index;

    count = 0;
    index = 0;
    // count dedigi srcnin null harici eleman sayisi "Hello" ise count = 5
    while (src[count] != '\0')
        count++;
    if (size != 0)
    {
        // Burda da index 0 dan basladigi icin ve null da sizein icine dahil oldugu icin size-1 deniyor
        while (src[index] != '\0' && index < (size - 1))
        {
            dest[index] = src[index];
            index++;
        }
        dest[index] = '\0';
    }
    return (count);
}

int main()
{
    char dest[] = "Merhaba";
    char src[] = "Dunya";
    ft_strlcpy(dest,src,6);
    printf("%s",dest);
    printf("\n%d",ft_strlcpy(dest,src,6));
    return 0;
}