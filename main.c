/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:30:52 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/09 14:46:33 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("El primer numero es: %i, el segundo es: %x ", 48, 0x6b);
	ft_printf("a ver con original: %p\n", "HOLA");
	ft_printf("a ver con punteros: 0x%p\n", "str"); 
}

