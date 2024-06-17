/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtan <andtan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:50:17 by andtan            #+#    #+#             */
/*   Updated: 2024/06/12 00:37:43 by andtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapped;
	unsigned int	i;

	mapped = ft_strdup(s);
	i = 0;
	if (!s || !f)
		return (NULL);
	if (!mapped)
		return (NULL);
	while (mapped[i])
	{
		mapped[i] = f(i, mapped[i]);
		i++;
	}
	return (mapped);
}
