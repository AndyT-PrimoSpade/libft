/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtan <andtan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:49:57 by andtan            #+#    #+#             */
/*   Updated: 2024/06/12 00:37:25 by andtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (dup)
		ft_strlcpy(dup, s1, ft_strlen(s1) + 1);
	return (dup);
}
