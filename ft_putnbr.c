/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:50:43 by fmontes           #+#    #+#             */
/*   Updated: 2023/10/31 14:10:43 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int num)
{
	
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + 48);
}