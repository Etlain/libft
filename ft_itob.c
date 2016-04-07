/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 22:36:14 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/04/07 23:16:32 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill_str(char *str , unsigned int nbr, unsigned int p, int i)
{
	int max;
	
	p = ft_power(2, i);
	max = i;
	str[max - i] = '1';
	nbr = nbr - p;
	while (i >= 0 && p != 0)
	{
		if ((p = ft_power(2, i)) <= nbr)
		{
			nbr = nbr - p;
			str[max - i] = '1';
		}
		i--;
	}
}

char *ft_itob(unsigned int nbr)
{
	char	*str;
	int	i;
	unsigned int p;

	if (nbr == 0)
		return ("0");
	i = 0;
	p = 0;
	while (p < nbr)
	{
		p = ft_power(2, i);
		i++;
	}
	i > 0 ? i-- : 0;
	str = (char *)malloc(i + 1);
	str[i + 1] = '\0';
	if (nbr - p != 0)
		i--;
	ft_init_str(str, '0', i);
	ft_fill_str(str, nbr, p, i);
	return (str);
}