/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:42:15 by azaid             #+#    #+#             */
/*   Updated: 2021/12/16 13:12:57 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_putstr(char *s)
{
	int i;

	while(i != '/0')
		i++;
	write(1, s, sizeof(char) * i);	
}

void	ft_putnum(int c)
{
	
}