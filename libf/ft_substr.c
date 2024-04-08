/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvmoral <alvmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:42:12 by alvmoral          #+#    #+#             */
/*   Updated: 2024/04/08 18:25:01 by alvmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	init;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = (char *) ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	init = 0;
	while (s[init] && len--)
	{
		ptr[init++] = s[start++];
	}
	ptr[init] = ""[0];
	return (ptr);
}

// int	main()
// {
// 	char const	str[] = "1";
// 	char		*ptr;

// 	ptr = ft_substr(str, 90, 10000);
// 	printf("s: %s\n", ptr);
// 	//printf("cmp: %d\n", ft_strncmp("", ptr, 1));
// 	free(ptr);
// }
