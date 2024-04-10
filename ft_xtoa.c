/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:13 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/10 00:26:31 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_toa.h"
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
		//printf("len evol --> nb: %lx,  hex: %lx\n", nb, hex);
	}
	return (hex / 0x10);
}

static int	write_digit(unsigned int digito)
{
	char	ch;

	if (digito <= 9)
		ch = digito + '0';
	else
	{
		digito = digito - 10;
		ch = digito + 'a';
	}
	return (write(1, &ch, 1));
}

int	ft_xtoa_w(unsigned int nb) //Controlar el caso para X
{
	unsigned int	len;
	unsigned int	digito;
	int				contador;

	contador = 0;
	//printf("nbi: %i   nbx: %x\n", nb, nb);
	len = get_len_hex(nb);
	write(1, "0x", 2);
	while (len > 0)
	{
		digito = nb / len;
		//printf("digito: u %u, x %x\n", digito, digito);
		contador += write_digit(digito);
		nb -= digito * len;
		//printf("nb: %x\n", nb);
		len /= 0x10;
	}
	return (contador);
}

//int	main(void)
//{
	//unsigned int	nb = 0x7f89;
	//printf("nb: %x\n", nb);
	//ft_xtoa_w(nb);
//}
