#include <unistd.h>
#include <stdio.h>

static unsigned int     get_len(unsigned int nb)
{
        unsigned int    holder;
        unsigned int    hex;

        hex = 1;
        if (nb == 0)
                nb += 10;
        while (nb >= 1)
        {
                holder = nb / 10;
                nb = holder;
                hex *= 10;
				//printf("nb: %u\thex: %u\n", nb, hex);
        }
        return (hex / 10);
}

void    ft_utoa_w(unsigned int nb)
{
	unsigned int    len;
	unsigned int    digito;
	unsigned char	print_digit;

	len = get_len(nb);
	while (len > 0)
	{
			digito = nb / len;
			//printf("digito: %u\t", digito);
			print_digit = digito + '0';
			//printf("print_digit: %c\n", print_digit);
			write(1, &print_digit, 1);
			nb -= digito * len;
			len /= 10;
	}
	write(1, "\n", 1);
}

//int	main(void)
//{
	//unsigned int nb = 90866;
	//ft_utoa_w(nb);
//}