/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:43:21 by azaid             #+#    #+#             */
/*   Updated: 2021/09/07 20:19:57 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	int		width;
	int		precision;
	int		zero;
	int		point;
	int		dash;
	int		total_length;
	int		sign;
	int		is_zero;
	int		percent;
	int		space;
}	t_print;

char	*ft_itoa(int n, int base);
int		ft_intlen(long n);
char	*ft_strcpy(char *dst, const char *src);

#endif