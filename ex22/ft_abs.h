/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:43:11 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/10/16 09:50:28 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

static int	abs(int n)
{
	if (n >= 0)
		return (n *= 1);
	else
		return (n *= -1);
}
# define ABS (abs)
#endif