/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_buff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:53:08 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/08 14:12:54 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include "../libft/final_repo_evaluation/libft.h"

void	ft_xtoa_w(unsigned int nb);
void	ft_utoa_w(unsigned int nb);
void	ft_write_char(unsigned int s);


static void	(*get_str_num(char c))(char*)
	//if (c == 'c')
	//{
		//c = va_arg(argum, char);
		//write(1, &c, 1);
	//}
	if (c == 's')
		return (&ft_write_char);
	//if (c == 'i')
		//ft_itoa(va_arg(argum, int));
	if (c == 'u')
		return (&ft_utoa_w);
	if (c == 'x')
		return (&ft_xtoa_w);
	return (NULL);
}

void	ft_printf(char const *s1, ...)
{
	int		i;
	va_list	argum;
	char	tp;

	i = 0;
	va_start(argum, s1);
	while (s1[i])
	{
		if (s1[i] == '%')
		{
			tp = s1[i + 1];
			if (tp)
			{
				get_str_num(tp)(va_arg(argum, unsigned int));
				i += 2;
			}
		}
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	va_end(argum);
}

int	main(void)
{
	unsigned int	nb = 45;
	char			s[] = "por ejemplo, esto";

	ft_printf("El primer numero es: %u, el segundo es: %x. Ahora repro el str: %s", nb, s);
}
