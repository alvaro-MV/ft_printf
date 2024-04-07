/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_buff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:53:08 by alvaro            #+#    #+#             */
/*   Updated: 2024/03/27 16:27:51by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

static void	(*get_str_num(char c))(unsigned int)
{
	if (c == 'i' || c == 'd')
		return (&ft_itoa_w);
	if (c == 'u')
		return (&ft_utoa_w);
	if (c == 'x' || c == 'p')
		return (&ft_xtoa_w);
	return (NULL);
}

/*
.n para el numero de ceros antes del numero.
/0, /200 para interpretar codigo ascii.

If successful, the total number of characters written is returned. 
On failure, a negative number is returned.

Comprobar que no ponga '-' al final y que va_arg termine correctamente en 
la funcion.
*/
void	ft_printf(char const *s1, ...)
{
	int		i;
	va_list	argum;
	char	tp;
	//void	*ptr;

	i = 0;
	va_start(argum, s1);
	while (s1[i])
	{
		if (s1[i] == '%')
		{
			tp = s1[i + 1];
			if (tp == 'u' || tp == 'x' || tp == 'X' 
			|| tp == 'd' || tp == 'i')
				get_str_num(tp)(va_arg(argum, unsigned int));
			else if (tp == 'p')
			{
				ft_ptoa_w(va_arg(argum, long long));
			}
			else if (tp == 's')
				ft_putstr_fd((char *) va_arg(argum, char *), 1);
			else if (tp == 'c')
				ft_putchar_fd(va_arg(argum, int), 1);
			i +=2;
		}
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	va_end(argum);
}

int	main(void)
{
	char	str[] = "HOla, adios.";
	//ft_printf("El primer numero es: %i, el segundo es: %x ", nb, 0x6b);
	printf("a ver con original: %p\n", str);
	ft_printf("a ver con punteros: 0x%p\n", str); // overflow en 8.
}
