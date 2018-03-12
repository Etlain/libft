/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_delchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 21:01:27 by mmouhssi          #+#    #+#             */
/*   Updated: 2018/03/12 23:28:43 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_str_delchar(char *str, char c)
{
	char	*tmp;
	int		lgt;
	int		nbr_c;
	int		i;
	int		j;

	if (!str || c == 0)
		return (NULL);
	lgt = ft_strlen(str);
	if ((nbr_c = ft_nbr_char(str, c)) <= 0)
		return (NULL);
	if (!(tmp = (char *)ft_memalloc((lgt - nbr_c) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			tmp[j] = str[i];
			j++;
		}
		i++;
	}
	return (tmp);
}
