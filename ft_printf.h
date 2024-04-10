/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:08 by alvaro            #+#    #+#             */
/*   Updated: 2024/04/10 13:51:21 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_xtoa_w(unsigned int nb);
int	ft_utoa_w(unsigned int nb);
int	ft_itoa_w(unsigned int nb);
int	ft_ptoa_w(long long nb);
int	ft_printf(char const *s1, ...);
int	ft_strtoa_w(char const *str, char c);
int	ft_chtoa_w(unsigned int c);

#endif