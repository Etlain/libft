/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 11:37:35 by mmouhssi          #+#    #+#             */
/*   Updated: 2018/03/08 16:30:37 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char			*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	start;
	size_t			length;

	if (!s)
		return (NULL);
	start = 0;
	length = ft_strlen(s) - 1;
	if (length > 0)
	{
		while (s[length] == '\t' || s[length] == '\n' || s[length] == ' ')
			length--;
		while (s[start] == '\t' || s[start] == '\n' || s[start] == ' ')
			start++;
	}
	length++;
	if (length == 1)
	{
		if (s[0] == '\t' || s[0] == '\n' || s[0] == ' ')
			length = 0;
	}
	else if (length < start)
		length = start;
	str = ft_strsub(s, start, length - start);
	return (str);
}
