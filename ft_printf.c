/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:29:44 by fmontes           #+#    #+#             */
/*   Updated: 2023/11/03 13:34:57 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	i;
	
	i = 0;	
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if(format[i] == '%')
		{
			check_args(format, i, ap);
			i++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
