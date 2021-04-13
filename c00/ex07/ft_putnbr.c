/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/06 01:20:42 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nb(char c);

void	ft_putnbr(int nb)
{
	char	number[10];
	int		posit;

	posit = 0;
	while (posit < 10)
	{
		if (nb < 0)
		{
			if (posit == 0)
				print_nb('-');
			number[posit] = ((nb % 10) * -1) + '0';
		}
		else
			number[posit] = nb % 10 + '0';
		if (number[posit] == '0' && nb / 10 == 0 && nb % 10 == 0 && posit != 0)
			number[posit] = 'x';
		nb = nb / 10;
		posit++;
	}
	while (posit >= 0)
	{
		print_nb(number[posit]);
		posit--;
	}
}

void	print_nb(char c)
{
	if (c != 'x')
		write(1, &c, 1);
}
