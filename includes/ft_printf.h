/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:45:26 by btenzlin          #+#    #+#             */
/*   Updated: 2021/10/18 13:43:23 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *input, ...);
int		examine_format(char c, va_list ap);
int		print_char(unsigned char	c);
int		print_int_d(int	n);
int		print_int_i(int	n);
int		print_int_u(unsigned int u);
int		print_string(char *s);
int		print_hex_l(unsigned int dec);
int		print_hex_c(unsigned int dec);
int		print_address(void *p);
char	*rev_string(char *s);
int		ft_digcnt(int n);
void	ft_putnbr_u(unsigned int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
int		print_hex_long(unsigned long dec);

#endif