/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 16:03:28 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/06/03 01:43:44 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnstr(char *str, int lgt)
{
	int i;

	i = 0;
	while (i < lgt && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
