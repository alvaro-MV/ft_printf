/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:02:27 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/10 23:33:24 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "_toa.h"
#include <limits.h>

int	ft_printf(char const *s1, ...);

int	main(void)
{
	int mio;
	int tuyo;

	mio = ft_printf("%d\n", 456);
	//ft_printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	tuyo = printf("%d\n", 456);
	//printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("n: %d\n", mio);
	printf("n: %d\n", tuyo);
}


