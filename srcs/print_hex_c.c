/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:28:17 by btenzlin          #+#    #+#             */
/*   Updated: 2021/10/19 11:40:01 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_digcnt(int n)
{
	int	count;
	int	temp;

	count = 0;
	temp = n;
	if (n == INT_MIN)
	{
		return (11);
	}
	if (temp < 0)
	{
		temp = temp * (-1);
		count++;
	}
	if (temp == 0)
	{
		count = 1;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		count++;
	}
	return (count);
}

char	*rev_string(char *s)
{
	char	*rev;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s);
	rev = (char *)malloc(sizeof(char) * j);
	j--;
	while (j >= 0)
	{
		rev[i] = s[j];
		i++;
		j--;
	}
	rev[i] = '\0';
	free (s);
	return (rev);
}

int	print_hex_c(unsigned int dec)
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
			s[count] = temp + 55;
		count++;
		dec = dec / 16;
	}
	s[count] = '\0';
	s = rev_string(s);
	write(1, s, count);
	free(s);
	return (count);
}
