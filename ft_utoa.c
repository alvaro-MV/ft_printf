/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:18 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/09 14:59:02 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toa.h"

static unsigned int	get_len(unsigned int nb)
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

int	ft_utoa_w(unsigned int nb)
{
	unsigned int	len;
	unsigned int	digito;
	unsigned char	print_digit;
	int				contador;

	len = get_len(nb);
	contador = 0;
	while (len > 0)
	{
		digito = nb / len;
		//printf("digito: %u\t", digito);
		print_digit = digito + '0';
		//printf("print_digit: %c\n", print_digit);
		contador += write(1, &print_digit, 1);
		nb -= digito * len;
		len /= 10;
	}
	return (contador);
}

//int	main(void)
//{
	//unsigned int nb = 90866;
	//ft_utoa_w(nb);
//}
