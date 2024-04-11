/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:02:27 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/11 13:34:13 by alvmoral         ###   ########.fr       */
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

	mio = ft_printf("%x\n", 93886664);
	tuyo = printf("%x\n", 429496729);
	printf("n: %d\n", mio);
	printf("n: %d\n", tuyo);
}


