/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 16:57:35 by mmouhssi          #+#    #+#             */
/*   Updated: 2018/03/09 16:36:10 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		**ft_lst_to_tab(t_list *lst)
{
	t_list	*tmp;
	char	**tab;
	int		len;
	int		i;

	tmp = lst;
	len = ft_lstlen(lst);
	tab = (char **)malloc(sizeof(char*) * (len + 1));
	i = 0;
	while (tmp != NULL)
	{
		tab[i] = ft_strdup((char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
