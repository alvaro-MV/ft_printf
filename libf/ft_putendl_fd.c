/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:12:14 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/08 21:52:13 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s && s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

// int	main()
// {
// 	char	s[] = "Adios";
// 	int		fd;

// 	fd = open("pp.txt", O_WRONLY | O_TRUNC);
// 	ft_putendl_fd(s, fd);
// }
