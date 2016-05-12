
#include "libft.h"

void    ft_round(char *str, int i, int b)
{
    if (str[i] > '4' && str[i] <= '9')
    {
        str[i] = '\0';
        b = 1;
        i--;
        while (i > 0)
        {
            if (str[i] == '9' && b == 1)
            {
                str[i] = '0';
                b = 1;
            }
            else if (str[i] > '4' && str[i] <= '9' && b == 1)
            {
                str[i] = str[i] + 1;
                b = 0;
            }
            else
                break ;
            i--;
        }
    }
    else
        str[i] = '\0';
}

void	ft_putldbl(long double nbr, int size)
{
	long int    n;
	long int    nbr2;
	int         i;
	int         b;
	char        *str;

    str = (char *)malloc(size + 1);
	ft_init_str(str, '0', size + 1);
	nbr2 = nbr;
    i = 0;
    while (i <= size)
    {
        n = (long int)nbr;
        nbr = nbr - (long double)n;
        nbr = nbr * 10;
        str[i] = nbr + '0';
        i++;
    }
    i--;
    ft_round(str, i, b);
    b == 1 ? ft_putnbr(nbr2 + 1) : ft_putnbr(nbr2);
    ft_putchar('.');
    ft_putstr(str);
    free(str);
}
