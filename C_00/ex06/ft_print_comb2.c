#include <unistd.h>

void ft_num1(char s1, char s2)
{
    write(1, &s1, 1);
    write(1, &s2, 1);
    write(1, " ", 1);
}
void ft_num2(char s3, char s4)
{
    write(1, &s3, 1);
    write(1, &s4, 1);
}

void ft_print_comb2()
{
    char s1, s2, s3, s4;
    s1 = '0';
    s2 = '0';
    s3 = '0';
    while (s1 <= '9')
    {
        while (s2 <= '8')
        {
            while (s3 <= '9')
            {
                s4 = s2 + 1;
                while (s4 <= '9')
                {
                    ft_num1(s1, s2);
                    ft_num2(s3, s4);
                    if (s1 == '9' && s2 == '8' && s3 == '9' && s4 == '9')
                    {
                        break;
                    }

                    s4++;
                    write(1, ", ", 2);
                }
                write(1, " ", 1);
                s3++;
            }
            s3 = '0';
            s2++;
        }
        s2 = s1 + 1;
        s1++;
    }
}

int main()
{
    ft_print_comb2();
}