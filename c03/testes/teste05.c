/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/14 14:55:44 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	
	char *point_dest;
	char *point_src;
	unsigned int size;

	size = 21;
	// point_src = "muito bom";
	// point_dest = "nota zero";
	 point_dest = strcpy(calloc(11, sizeof(char)), "muito bom,");
	 point_src = strcpy(calloc(10, sizeof(char)), "nota zero");
	printf("resultado: %u\n", ft_strlcat(point_dest, point_src, size));
	// printf("resultado2: %zu\n", strlcat(point_dest, point_src, size));
	return (0);
}
