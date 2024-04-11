/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:53:08 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/11 20:25:05 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	size_t		i;
	va_list		argum;
	char		format;
	int			counter;

	i = 0;
	counter = 0;
	va_start(argum, s1);
	while (s1[i])
	{
		if (s1[i] == '%' && s1[i++] != '\0')
		{
			format = s1[i];
			if (format == 'u')
				counter += ft_utoa_w(va_arg(argum, unsigned int));
			else if (format == 'x' || format == 'X')
				counter += ft_xtoa_w(va_arg(argum, unsigned int), format);
			else if (format == 'p')
				counter += ft_ptoa_w(va_arg(argum, unsigned long long));
			else if (format == 's')
				counter += ft_strtoa_w(va_arg(argum, char *));
			else if (format == 'c')
				counter += ft_chtoa_w(va_arg(argum, int));
			else if (format == 'i' || format == 'd')
				counter += ft_itoa_w(va_arg(argum, int));
			else if (format == '%')
				counter += write(1, &format, 1);
		}
		else
			counter += write(1, &s1[i], 1);
		i++;
	}
	va_end(argum);
	return (counter);
}
