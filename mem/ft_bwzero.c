/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bwzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 13:08:43 by mmouhssi          #+#    #+#             */
/*   Updated: 2018/03/09 16:32:34 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_bwzero(void *s, size_t n)
{
	wchar_t		*tab;
	size_t		i;

	i = 0;
	tab = (wchar_t*)s;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
}