/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_upphex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:31:06 by felipe            #+#    #+#             */
/*   Updated: 2023/11/02 11:35:15 by felipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_upphex(int n)
{
	int	i;
	char	rem;
	char	str[8];

	i = 0;
	while (n > 0)
	{
		rem = n % 16;
		if (rem < 10)
			str[i] = rem + 48;
		else
			str[i] = rem + 55;
		n = n / 16;
		i++;
	}
	while (i--)
		write(1, &str[i], 1);
}