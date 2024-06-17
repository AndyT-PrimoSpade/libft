/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtan <andtan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:43:16 by andtan            #+#    #+#             */
/*   Updated: 2024/06/15 01:45:34 by andtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	if ((!dest && !src) || n == 0)
		return (dest);
	if (temp_dest < temp_src)
		while (n--)
			*temp_dest++ = *temp_src++;
	else
	{
		temp_dest += n - 1;
		temp_src += n - 1;
		while (n--)
			*temp_dest-- = *temp_src--;
	}
	return (dest);
}
