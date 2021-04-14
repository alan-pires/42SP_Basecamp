/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/14 03:54:33 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *pont_dest;

	pont_dest = dest;
	while (*pont_dest != '\0')
		pont_dest++;
	while (*src != '\0')
	{
		*pont_dest = *src;
		pont_dest++;
		src++;
	}
	*pont_dest = '\0';
	return (dest);
}
