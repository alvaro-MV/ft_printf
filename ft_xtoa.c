/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:13 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/11 13:42:32 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_toa.h"
#include <stdio.h>

static unsigned int	get_len_hex(unsigned int nb)
{
	unsigned long	hex;
	unsigned int	holder;

	hex = 0x01;
	if (nb == 0x00)
		hex *= 0x10;
	while (nb >= 0x01)
	{
		holder = nb / 0x10;
		nb = holder;
		hex *= 0x10;
		//printf("len evol --> nb: %lx,  hex: %lx\n", nb, hex);
	}
	return (hex / 0x10);
}

static int	write_digit(unsigned int digito, char c)
{
	char	ch;

	if (digito <= 9)
		ch = digito + '0';
	else
	{
		digito = digito - 10;
		ch = digito + 'a';
		if (c == 'X')
			ch = digito + 'A';
	}
	return (write(1, &ch, 1));
}

int	ft_xtoa_w(unsigned int nb, char c) //Controlar el caso para X
{
	unsigned int	len;
	unsigned int	digito;
	int				contador;

	contador = 0;
	//printf("nbi: %i   nbx: %x\n", nb, nb);
	len = get_len_hex(nb);
	while (len > 0x0)
	{
		digito = nb / len;
		//printf("digito: u %u, x %x\n", digito, digito);
		contador += write_digit(digito, c);
		nb -= digito * len;
		//printf("nb: %x\n", nb);
		len /= 0x10;
	}
	return (contador);
}

// int	main(void)
// {
// 	unsigned int	nb = 938886664;
	
// 	printf("nb: %x\n", nb);
// 	ft_xtoa_w(nb, 'x');
// }
