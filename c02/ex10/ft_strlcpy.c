/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/12 16:09:33 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int cont;

	cont = 0;
	if (size == 0)
	{
		while (src[cont])
			cont++;
		return (cont);
	}
	while (cont < size - 1 && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	if (cont < size)
		dest[cont] = '\0';
	while (src[cont] != '\0')
		cont++;
	return (cont);
}
