/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:53:08 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/10 17:32:05 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	(*get_str_num(char c))(unsigned int)
{
	if (c == 'i' || c == 'd')
		return (&ft_itoa_w);
	if (c == 'u')
		return (&ft_utoa_w);
	if (c == 'c')
		return (&ft_chtoa_w);
	if (c == 'x' || c == 'X')
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

Comprobar con /0, NULL, negativos raros, overflows, etc.
*/

int	ft_printf(char const *s1, ...)
{
	int		i;
	va_list	argum;
	char	format;
	int		counter;

	i = 0;
	counter = 0;
	va_start(argum, s1);
	while (s1[i])
	{
		if (s1[i] == '%')
		{
			format = s1[i + 1];
			if (format == 'u' || format == 'd' || format == 'i'
				|| format == 'c' || format == 'x' || format == 'X')
				counter += get_str_num(format)(va_arg(argum, unsigned int));
			else if (format == 'p')
				counter += ft_ptoa_w(va_arg(argum, unsigned long long));
			else if (format == 's')
				counter += ft_strtoa_w(va_arg(argum, char *), format);
			else if (format == '%')
				counter += write(1, &format, 1);
			i += 2;
		}
		if (s1[i])
		{
			counter += write(1, &s1[i], 1);
			i++;
		}
	}
	va_end(argum);
	return (counter);
}
