/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/16 02:32:37 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	res = 1;
	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
