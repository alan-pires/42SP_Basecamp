/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/14 16:20:29 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *str = "o mar é da cor amarela?";
	char *to_find = "mar";
	char *str2 = "o mar é da cor amarela?";
	char *to_find2 = "verde";
		
	printf("resultado: %s\n", ft_strstr(str, to_find));
	printf("resultado2: %s\n", strstr(str, to_find));
	printf("resultado: %s\n", ft_strstr(str2, to_find2));
	printf("resultado2: %s\n", strstr(str2, to_find2));
	return (0);
}

