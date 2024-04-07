/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:27 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/07 20:29:18 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static int      get_len(long nb)
{
        long    number;
        long    dec;

        number = (long) nb;
        dec = 1;
        if (number < 0)
                number *= -1;
        if (number == 0)
                dec *= 10;
        while (dec <= number)
                dec *= 10;
        return (dec / 10);
}

void	ft_itoa_w(unsigned int nb)
{
        long	digit;
        int	dlen;
        long	lnb;
	char	print_digit;		

	lnb = (int) nb;
        dlen = get_len(nb);
	//printf("lnb: %li\n", lnb);
        if (lnb < 0)
        {
                write(1, "-", 1);
                lnb = (~lnb) + 1;
        }
        while (dlen > 0)
        {
                digit = lnb / dlen;
		//printf("digito: %li\n", digit);
		print_digit = digit + '0';
                write(1, &print_digit, 1);
                lnb -= digit * dlen;
                dlen /= 10;
        }
}

//int	main(void)
//{
	//ft_itoa_w(-8997845);
//}