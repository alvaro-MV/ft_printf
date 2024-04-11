/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:02:27 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/11 13:48:03by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "_toa.h"
#include <limits.h>
#include <string.h>

int	ft_printf(char const *s1, ...);

int	main(void)
{
	int	mio;
	int	tuyo;
	char	str[] = "Me lo ordena.";

	mio = ft_printf(" %p %p \n", 0, 0);
	tuyo = printf("%p \n", 0, 0);
	printf("n: %d\n", mio);
	printf("n: %d\n", tuyo);
}
