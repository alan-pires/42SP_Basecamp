/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/07 17:37:53 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cont;
	int cont2;
	int aux;

	cont = 0;
	while (cont < size)
	{
		cont2 = cont;
		while (cont2 < size)
		{
			if (tab[cont] > tab[cont2])
			{
				aux = tab[cont];
				tab[cont] = tab[cont2];
				tab[cont2] = aux;
			}
			cont2++;
		}
		cont++;
	}
}
