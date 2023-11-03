/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:26:37 by fmontes           #+#    #+#             */
/*   Updated: 2023/11/03 13:28:57 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_args(const char *format, int i, va_list ap)
{
	if (format[i + 1] == 'c')
		ft_putchar(va_arg(ap, int));
	else if (format[i + 1] == 's')
		ft_putstr(va_arg(ap, char *));
	else if (format[i + 1] == 'p')
		get_mem(va_arg(ap, unsigned long));
	else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
		ft_putnbr(va_arg(ap, int));
	else if (format[i + 1] == 'u')
		ft_putunsgnbr(va_arg(ap, unsigned int));
	else if (format[i + 1] == 'x')
		get_lowhex(va_arg(ap, unsigned int));
	else if (format[i + 1] == 'X')
		get_upphex(va_arg(ap, unsigned int));
	else if (format[i + 1] == '%')
		ft_putchar('%');	
}

