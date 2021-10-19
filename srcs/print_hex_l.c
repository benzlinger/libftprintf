/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:29:29 by btenzlin          #+#    #+#             */
/*   Updated: 2021/10/19 11:39:32 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_hex_l(unsigned int dec)
{
	char				*s;
	unsigned int		temp;
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
