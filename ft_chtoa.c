/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:15:35 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/09 19:47:05 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_toa.h"

int	ft_chtoa_w(unsigned int c)
{
	int	counter;
	int	chr;

	chr = c;
	counter = write(1, &chr, 1);
	return (counter);
}
