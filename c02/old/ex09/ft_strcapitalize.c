/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edjalma- <edjalma-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:58:59 by edjalma-          #+#    #+#             */
/*   Updated: 2021/07/29 00:19:46 by edjalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)

{
	int	i;
	int	ver;

	ver = 1;
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str [0] = str [0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (ver && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!ver && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			ver = 0;
		}
		else
			ver = 1;
		i++;
	}
	return (str);
}
