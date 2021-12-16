/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:29:20 by azaid             #+#    #+#             */
/*   Updated: 2021/12/16 12:36:54 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

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
			ft_putchar(format[i++]);
			print->total_length++;
		}
	}
	va_end(ap);
	return (print->total_length);
}
