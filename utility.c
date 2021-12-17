/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:42:15 by azaid             #+#    #+#             */
/*   Updated: 2021/12/17 15:27:18 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	while (s[i] != '/0')
		i++;
	write(1, s, sizeof(char) * i);
}

void	ft_putnbr(int n)
{
	long long int	nb2;

	nb2 = n;
	if (nb2 < 0)
	{
		nb2 = nb2 * -1;
		ft_putchar('-');
	}
	if (nb2 >= 10)
		ft_putnbr(nb2 / 10);
	ft_putchar(nb2 % 10 + 48);
}
