/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:43:21 by azaid             #+#    #+#             */
/*   Updated: 2021/12/16 16:56:18 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

char	*ft_itoa(int n, int base);
int		ft_intlen(long n);
char	*ft_strcpy(char *dst, const char *src);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int c);
void	ft_convert(int num, int base);

#endif