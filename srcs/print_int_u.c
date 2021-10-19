/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:35:02 by btenzlin          #+#    #+#             */
/*   Updated: 2021/10/11 13:04:56 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_u(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr_u(n / 10);
	}
	ft_putchar_fd((n % 10) + '0', 1);
}

int	print_int_u(unsigned int u)
{
	int				len;
	unsigned int	save;

	len = 0;
	u = UINT_MAX + (u + 1);
	if (u == 0)
		len++;
	save = u;
	while (save != 0)
	{
		save = save / 10;
		len++;
	}
	ft_putnbr_u(u);
	return (len);
}
