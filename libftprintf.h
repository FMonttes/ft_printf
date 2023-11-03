/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:45:31 by fmontes           #+#    #+#             */
/*   Updated: 2023/11/03 13:28:39 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	check_args(const char *format, int i, va_list ap);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putnbr(int num);
void	ft_putstr(char *str);
void	ft_putunsgnbr(unsigned int num);
void	get_lowhex(unsigned int n);
void	get_upphex(unsigned int n);
void	get_mem(unsigned long n);

#endif
