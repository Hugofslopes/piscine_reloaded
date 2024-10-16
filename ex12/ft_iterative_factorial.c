/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:18:45 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/10/16 14:08:49 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (i < 0)
		return (0);
	else if (i == 0)
		return (1);
	else if (nb > 12)
		return (0);
	else
		while (i > 1)
			nb *= (i-- - 1);
	return (nb);
}
