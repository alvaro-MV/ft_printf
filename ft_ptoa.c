/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:02 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/09 20:03:23 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_toa.h"

static long long	get_len_hex(long long nb)
{
	long long	holder;
	long long	hex;

	hex = 0x01;
	if (nb == 0x00)
		nb += 0x10;
	while (nb >= 0x01)
	{
		holder = nb / 0x10;
		nb = holder;
		hex *= 0x10;
		//printf("len evol --> nb: %llx,  hex: %llx\n", nb, hex);
	}
	return (hex / 0x10);
}

static int	write_digit(long long digito, char c)
{
	char	ch;

	if (digito > 0 && digito <= 9)
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

int	ft_ptoa_w(long long nb, char c) //Controlar el caso para X
{
	long long	len;
	long long	digito;
	int			contador;
	
	contador = 0;
	//printf("nbi: %lli   nbx: %llx\n", nb, nb);
	len = get_len_hex(nb);
	write(1, "0x", 2);
	//printf("len: %llx", len);
	while (len > 0x0)
	{
		digito = nb / len;
		//printf("digito: u %llu, x %llx\n", digito, digito);
		contador += write_digit(digito, c);
		nb -= digito * len;
		//printf("nb: %llx\n", nb);
		len /= 0x10;
	}
	return (contador);
}

//int   main(void)
//{
	//unsigned int  nb = 0x7f89;
	//long long ptr = &nb;
	////printf("nb: %x\n", nb);
	//ft_ptoa_w((long long) ptr);
//}