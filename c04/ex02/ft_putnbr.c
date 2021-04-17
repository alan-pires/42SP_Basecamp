/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/15 15:59:08 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb(char c)
{
	if (c != 'e')
		write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	number[10];
	int		pos;

	pos = 0;
	while (pos < 10)
	{
		if (nb < 0)
		{
			if (pos == 0)
				print_nb('-');
			number[pos] = ((nb % 10) * -1) + '0';
		}
		else
			number[pos] = nb % 10 + '0';
		if (number[pos] == '0' && nb / 10 == 0 && nb % 10 == 0 && pos != 0)
			number[pos] = 'e';
		nb = nb / 10;
		pos++;
	}
	while (pos >= 0)
	{
		print_nb(number[pos]);
		pos--;
	}
}
