/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:42:34 by fmontes           #+#    #+#             */
/*   Updated: 2023/11/03 09:53:49 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	get_lowhex(unsigned int n)
{
	int		i;
	char	rem;
	char	str[8];

	i = 0;
	while (n > 0)
	{
		rem = n % 16;
		if (rem < 10)
			str[i] = rem + 48;
		else
			str[i] = rem + (55 + 32);
		n =  n / 16;
		i++;
	}
	while (i--)
		write(1, &str[i], 1);
}
