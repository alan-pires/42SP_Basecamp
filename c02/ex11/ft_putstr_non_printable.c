/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/10 15:20:12 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_to_hexa(unsigned char c)
{
	char	string[16];
	char	*pointer;
	int		div;
	int		mod;

	pointer = string;
	pointer = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &pointer[div], 1);
	write(1, &pointer[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_convert_to_hexa(*(unsigned char*)str[i + 1]);
		i++;
	}
}
