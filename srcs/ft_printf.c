/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:48:21 by btenzlin          #+#    #+#             */
/*   Updated: 2021/10/18 13:20:12 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	examine_format(char c, va_list ap)
{
	int		len;

	len = 0;
	if (c == 'c')
		len = print_char(va_arg(ap, int));
	else if (c == 's')
		len = print_string(va_arg(ap, char *));
	else if (c == 'p')
		len = print_address(va_arg(ap, void *));
	else if (c == 'd')
		len = print_int_d(va_arg(ap, int));
	else if (c == 'i')
		len = print_int_i(va_arg(ap, int));
	else if (c == 'u')
		len = print_int_u(va_arg(ap, unsigned int));
	else if (c == 'x')
		len = print_hex_l(va_arg(ap, long));
	else if (c == 'X')
		len = print_hex_c(va_arg(ap, long));
	else if (c == '%')
		len = write(1, "%", 1);
	else
		return (0);
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int		len;
	int		count;

	va_start(ap, input);
	len = 0;
	count = 0;
	while (input[count])
	{
		if (input[count] == '%')
		{
			count++;
			len = len + examine_format(input[count], ap);
		}
		else
		{
			len = len + write(1, &input[count], 1);
		}
		count++;
	}
	va_end(ap);
	return (len);
}
