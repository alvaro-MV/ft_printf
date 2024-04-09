/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:18 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/09 20:13:03 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_toa.h"

static unsigned int	get_len(unsigned int nb)
{
	unsigned int    hex;

	hex = 1;
	if (nb == 0)
		hex *= 10;
	while (hex <= nb)
		hex *= 10;
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
