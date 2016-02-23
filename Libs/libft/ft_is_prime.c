/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 12:05:28 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 15:29:09 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return 1 if passed number is prime, 0 either
*/

int					ft_is_prime(unsigned int i)
{
	unsigned int	cpt;

	cpt = 3;
	if (i % 2 == 0)
		return (0);
	while (cpt * cpt <= i)
	{
		if (i % cpt == 0)
			return (0);
		cpt++;
	}
	return (1);
}
