/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:29:20 by azaid             #+#    #+#             */
/*   Updated: 2021/12/16 17:04:37 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, format);
	while (format[i++])
	{
		if (format[i] == '%')
		{
		if (format[i+1] == 'c')
			ft_putchar(va_args(ap, int));
		if (format[i+1] == 's')
			ft_puts(va_args(ap, char *));
		if (format[i+1] == 'd')
			ft_putnbr(va_args(ap, float));
		if (format[i+1] == 'i')
			ft_putnbr(va_args(ap, int));
		if (format[i+1] == 's')
			ft_putchar(va_args(ap, int));
		if (format[i+1] == 's')
			ft_putchar(va_args(ap, int));
		if (format[i+1] == 's')
			ft_putchar(va_args(ap, int));
		}
	}
	va_end(ap);
	return (1);
}
