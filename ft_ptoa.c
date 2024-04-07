/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:02 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/07 20:26:55 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static long long     get_len_hex(long long nb)
{
        long long    holder;
        long long    hex;

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

static void     write_digit(long long digito)
{
        char    ch;
        if (digito > 0 && digito <= 9)
                ch = digito + '0';
        else
        {
                digito = digito - 10;
                ch = digito + 'a';
        }
        write(1, &ch, 1);
}

void    ft_ptoa_w(long long nb) //Controlar el caso para X
{
        long long	len;
        long long	digito;

        //printf("nbi: %lli   nbx: %llx\n", nb, nb);
        len = get_len_hex(nb);
		//printf("len: %llx", len);
        while (len > 0x0)
        {
                digito = nb / len;
                //printf("digito: u %llu, x %llx\n", digito, digito);
                write_digit(digito);
                nb -= digito * len;
                //printf("nb: %llx\n", nb);
                len /= 0x10;
        }
}

//int   main(void)
//{
        //unsigned int  nb = 0x7f89;
		//long long ptr = &nb;
        ////printf("nb: %x\n", nb);
        //ft_ptoa_w((long long) ptr);
//}