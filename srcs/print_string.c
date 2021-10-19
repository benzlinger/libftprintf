/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:01:37 by btenzlin          #+#    #+#             */
/*   Updated: 2021/09/30 12:54:02 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_string(char *s)
{
	int		len;

	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}
