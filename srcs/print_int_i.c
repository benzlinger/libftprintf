/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:55:12 by btenzlin          #+#    #+#             */
/*   Updated: 2021/09/27 13:58:40 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_int_i(int	n)
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
