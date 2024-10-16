/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:39:39 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/10/16 09:40:55 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	char	*str2;

	i = ft_strlen(src);
	str = malloc((i * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	str2 = str;
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (str2);
}
