/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:30:52 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/09 20:17:51 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_printf(char const *s1, ...);

int	main(void)
{
	ft_printf("El numero elegio es: %u", 987);
	printf("El tiempo negativo: %u", -987);
}


