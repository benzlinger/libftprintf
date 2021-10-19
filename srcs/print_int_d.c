/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:21:21 by btenzlin          #+#    #+#             */
/*   Updated: 2021/09/27 17:21:28 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_int_d(int	n)
{
	int	len;
	int	save;

	len = 0;
	save = n;
	if (save <= 0)
		len++;
	while (save != 0)
	{
		save = save / 10;
		len++;
	}
	ft_putnbr_fd(n, 1);
	return (len);
}
