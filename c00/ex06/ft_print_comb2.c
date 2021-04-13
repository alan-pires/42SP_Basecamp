/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/06 04:50:16 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int first, int second)
{
	ft_putchar(first / 10 + '0');
	ft_putchar(first % 10 + '0');
	ft_putchar(' ');
	ft_putchar(second / 10 + '0');
	ft_putchar(second % 10 + '0');
}

void	ft_print_comb2(void)
{
	int right_n;
	int left_n;

	right_n = 0;
	left_n = 0;
	while (left_n <= 98)
	{
		right_n = left_n + 1;
		while (right_n <= 99)
		{
			print_numbers(left_n, right_n);
			if (left_n < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			right_n++;
		}
		left_n++;
	}
}
