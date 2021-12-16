/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:29:20 by azaid             #+#    #+#             */
/*   Updated: 2021/12/15 16:11:22 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

t_print	*ft_init_print(t_print *print)
{
	print->width = 0;
	print->precision = 0;
	print->zero = 0;
	print->point = 0;
	print->dash = 0;
	print->total_length = 0;
	print->sign = 0;
	print->is_zero = 0;
	print->percent = 0;
	print->space = 0;
	return (print);
}

int	ft_printf(char *format, ...)
{
	va_list		ap;
	t_print		*print;
	int			i;
	int			j;

	i = 0;
	j = 0;
	print = (t_print *)malloc(sizeof(t_print));
	print = ft_init_print(print);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = ft_parse_format(format, &i, print, ap);
			if (j == -1)
				return (-1);
		}
		else
		{
			ft_putchar(format[i]);
			print->total_length++;
			i++;
		}
	}
	va_end(ap);
	return (print->total_length);
}
