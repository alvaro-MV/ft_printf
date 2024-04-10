/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:02:27 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/10 15:02:21 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *s1, ...);

int	main(void)
{
	int mio;
	int tuyo;
	int	n;

	mio = ft_printf(" %c %c %c \n", '0', 0, '1');
	tuyo = printf(" %c %c %c \n", '0', 0, '1');
	printf("n: %d\n", mio);
	printf("n: %d\n", tuyo);
}


