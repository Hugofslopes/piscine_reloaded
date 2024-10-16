/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:41:55 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/10/16 14:10:49 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new_array;
	int	range;
	int	i;
	int	a;

	if (min >= max)
	{
		new_array = NULL;
		return (new_array);
	}
	range = max - min;
	new_array = malloc((range) * sizeof(int));
	if (new_array == NULL)
		return (0);
	i = 0;
	a = min;
	while (a < max)
	{
		new_array[i] = a;
		a++;
		i++;
	}
	return (new_array);
}
