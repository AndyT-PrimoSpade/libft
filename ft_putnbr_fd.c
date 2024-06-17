/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andtan <andtan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:17:01 by andtan            #+#    #+#             */
/*   Updated: 2024/06/12 00:37:13 by andtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unb;

	unb = n;
	if (n < 0)
	{
		unb = -n;
		ft_putchar_fd('-', fd);
	}
	if (unb > 9)
	{
		ft_putnbr_fd(unb / 10, fd);
		ft_putnbr_fd(unb % 10, fd);
	}
	else
		ft_putchar_fd(unb + '0', fd);
}
