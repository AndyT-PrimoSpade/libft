/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtan <andtan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:14:54 by andtan            #+#    #+#             */
/*   Updated: 2024/06/12 00:37:50 by andtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	needle_len;

	needle_len = 0;
	while (little[needle_len] != '\0')
		needle_len++;
	if (needle_len == 0)
		return ((char *)big);
	while (*big && len >= needle_len)
	{
		if (ft_memcmp(big, little, needle_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
