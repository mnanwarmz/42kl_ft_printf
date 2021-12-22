/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:29:20 by azaid             #+#    #+#             */
/*   Updated: 2021/12/22 14:20:03 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

void	ft_parse_format(int *i, char c, va_list ap, int *print_length)
{
	if (c == 'c')
		*print_length += ft_putchar(va_arg(ap, int));
	if (c == 's')
		*print_length += ft_putstr(va_arg(ap, char *));
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ap, int), print_length);
	if (c == 'u')
		ft_putui(va_arg(ap, unsigned int), print_length);
	if (c == 'p')
	{
		ft_putstr("0x");
		*print_length += 2;
		ft_putptr(va_arg(ap, unsigned long long), print_length);
	}
	if (c == 'x' || c == 'X')
		ft_puthex(va_arg(ap, unsigned int), print_length, c);
	if (c == '%')
		*print_length += ft_putchar('%');
	i++;
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	static int	print_length;

	i = 0;
	print_length = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_parse_format(&i, format[i + 1], ap, &print_length);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			print_length++;
		}
		i++;
	}
	va_end(ap);
	return (print_length);
}
