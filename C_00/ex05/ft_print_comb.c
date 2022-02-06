#include <unistd.h>
#include <conio.h>
void ft_3num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')// Bu onemliydi yoksa 789 dan sonra virgul olucakti
	{
		write(1, ", ", 2);
	}
}
void ft_print_comb(void)
{
    char f, s, t;
    f = '0';
    while (f <= '7')
    {
        s = f + 1;
        while (s <= '8')
        {
            t = s + 1;
            while (t <= '9')
            {
                ft_3num(f,s,t);
                
                t++;
            }
            s++;
        }
        f++;
    }
}

int main()
{
    ft_print_comb();
    getch();
    return 0;
}