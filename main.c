/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:30:52 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/08 23:02:04 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libprintf.h"

int	main(void)
{
	char	str[] = "HOla, adios.";
	//ft_printf("El primer numero es: %i, el segundo es: %x ", nb, 0x6b);
	printf("a ver con original: %p\n", str);
	ft_printf("a ver con punteros: 0x%p\n", str); // overflow en 8.
}
