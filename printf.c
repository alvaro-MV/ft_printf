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

#include "ft_printf.h"

static int	(*get_str_num(char c))(unsigned int)
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
int	ft_printf(char const *s1, ...)
{
	int		i;
	va_list	argum;
	char	tp;
	int		counter;

	i = 0;
	counter = 0;
	va_start(argum, s1);
	while (s1[i])
	{
		if (s1[i] == '%')
		{
			tp = s1[i + 1];
			if (tp == 'u' || tp == 'x' || tp == 'X'
				|| tp == 'd' || tp == 'i')
				counter += get_str_num(tp)(va_arg(argum, unsigned int));
			else if (tp == 'p')
				counter += ft_ptoa_w(va_arg(argum, long long));
			else if (tp == 's' || tp == 'c')
				ft_strtoa_w(va_arg(argum, char *), tp);
			i += 2;
		}
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	va_end(argum);
	return (counter);
}

