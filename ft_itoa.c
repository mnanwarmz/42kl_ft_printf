/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:45:08 by azaid             #+#    #+#             */
/*   Updated: 2021/09/06 22:30:02 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_intlen(long n)
{
	if (n < 0)
		return (ft_intlen(-n) + 1);
	if (n >= 10)
		return (ft_intlen(n / 10) + 1);
	return (1);
}

char	*ft_itoa(int n, int base)
{
	char	*str;
	int		len;

	len = ft_intlen(n) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (n < base && n >= -base && base > 10)
		len--;
	str[--len] = '\0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	if (n == 0)
		return (ft_strcpy(str, "0"));
	while (len && n)
	{
		if ((n % base) > 9)
			str[--len] = 'A' + ((n % base) - 10);
		else
			str[--len] = '0' + (n % base);
		n /= base;
	}
	return (str);
}
