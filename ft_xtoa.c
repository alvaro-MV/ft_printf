#include <unistd.h>
#include <stdio.h>

static unsigned int	get_len_hex(unsigned int nb)
{
	unsigned int	holder;
	unsigned int	hex;

	hex = 0x01;
	if (nb == 0x00)
		nb += 0x10;
	while (nb >= 0x01)
	{
		holder = nb / 0x10;
		nb = holder;
		hex *= 0x10;
	}
	return (hex / 0x10);
}

static void	write_digit(unsigned int digito)
{
	char	ch;
	if (digito > 0 && digito <= 9)
		ch = digito + '0';
	else
	{
		digito = digito - 10;
		ch = digito + 'a';
	}
	write(1, &ch, 1);
}

void	ft_xtoa_w(unsigned int nb)
{
	unsigned int	len;
	unsigned int	digito;

	//printf("nbi: %i   nbx: %x\n", nb, nb);
	len = get_len_hex(nb);
	while (len > 0)
	{
		digito = nb / len;
		write_digit(digito);
		nb -= digito * 0x10;
		len /= 0x10;
	}
}

//int	main(void)
//{
	//unsigned int	nb = 90;
	//printf("nb: %x\n", nb);
	//ft_xtoa_w(nb);
//}