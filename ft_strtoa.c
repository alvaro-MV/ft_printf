/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:38:56 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/09 18:42:21 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_toa.h"
#include <stdio.h>

int	ft_strtoa_w(char const *str, char c)
{
	int	contador;

	contador = 0;
	if (c == 'c')
		contador += write(1, str, 1);
	else if (c == 's')
		contador += write(1, str, ft_strlen(str));
	return (contador);
}
