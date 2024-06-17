/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtan <andtan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:47:33 by andtan            #+#    #+#             */
/*   Updated: 2024/06/12 00:35:58 by andtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		sign;
	long	nb;

	nb = n;
	sign = 1;
	digits = count_digits(n);
	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	str[digits--] = '\0';
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	while (digits >= 0)
	{
		str[digits--] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
