/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:43:21 by azaid             #+#    #+#             */
/*   Updated: 2021/12/22 07:26:33 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int c, int *print_length);
void	ft_puthex(int c, int *print_length, const char format);
void	ft_putptr(unsigned long long c, int *print_length);
int		ft_convert(int num, int base);
int		ft_printf(char *format, ...);

#endif