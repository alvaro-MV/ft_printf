/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writestr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:10:13 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/06 20:39:36 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/final_repo_evaluation/libft.h"

void	ft_write_char(unsigned int s)
{
	char	*str;

	str = (char *) s;
	ft_putstr_fd(s, 1);
}
