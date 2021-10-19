/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:56:34 by btenzlin          #+#    #+#             */
/*   Updated: 2021/10/19 12:40:28 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_hex_long(unsigned long dec)
{
	char				*s;
	unsigned long		temp;
	int					count;

	s = malloc(22);
	count = 0;
	if (dec == 0)
		s[count++] = '0';
	while (dec > 0)
	{
		temp = dec % 16;
		if (temp < 10)
			s[count] = temp + 48;
		else
			s[count] = temp + 87;
		count++;
		dec = dec / 16;
	}
	s[count] = '\0';
	s = rev_string(s);
	write(1, s, count);
	free(s);
	return (count);
}

int	print_address(void *p)
{
	unsigned long	l;
	int				len;

	l = (unsigned long)p;
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	len = print_hex_long(l) + 2;
	return (len);
}
