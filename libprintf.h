/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaro <alvaro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:08 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/07 20:18:54 by alvaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINT_H
# define LIBPRINT_H

#include <unistd.h>
#include <stdarg.h>
#include "../libft_definitiva/libft.h" //cambiar en 42.

void	ft_xtoa_w(unsigned int nb);
void	ft_utoa_w(unsigned int nb);
void	ft_itoa_w(unsigned int nb);
void	ft_ptoa_w(long long nb);
#endif