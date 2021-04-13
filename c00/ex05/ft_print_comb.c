/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/06 04:48:59 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_comma(void);

void	ft_print_comb(void)
{
	char unidade;
	char dezena;
	char centena;

	centena = '0';
	while (centena <= '7')
	{
		dezena = centena + 1;
		while (dezena <= '8')
		{
			unidade = dezena + 1;
			while (unidade <= '9')
			{
				ft_putchar(centena);
				ft_putchar(dezena);
				ft_putchar(unidade);
				if (!(centena == '7' && dezena == '8' && unidade == '9'))
					print_comma();
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comma(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}
