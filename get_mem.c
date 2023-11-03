/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:21:15 by fmontes           #+#    #+#             */
/*   Updated: 2023/11/03 13:32:09 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	get_mem(unsigned long n)
{
	int	i;
	char	rem;
	char	str[14];

	i = 0;
	while (n > 0)
	{
		rem = n % 16;
		if (rem < 10)
			str[i] = rem + 48;
		else
			str[i] = rem + (55 + 32);
		n = n / 16;
		i++;
	}
	str[i++] = 'x';
	str[i++] = '0';
	while (i--)
		write(1, &str[i], 1);
}
