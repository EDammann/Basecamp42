/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edjalma- <edjalma-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:58:05 by edjalma-          #+#    #+#             */
/*   Updated: 2021/07/27 15:58:06 by edjalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempd;
	int	tempm;

	if (*b != 0)
	{
		tempd = *a / *b;
		tempm = *a % *b;
		*a = tempd;
		*b = tempm;
	}
}
