/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_cpy_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 19:41:46 by mmouhssi          #+#    #+#             */
/*   Updated: 2018/03/09 16:33:31 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_lst_cpy_tab(char **tab)
{
	t_list	*lst;
	t_list	*tmp;
	int		i;

	lst = NULL;
	i = 0;
	while (tab[i] != NULL)
	{
		if (!lst)
			lst = ft_lstnew((void *)tab[i], ft_strlen(tab[i]));
		else
		{
			tmp = ft_lstnew((void *)tab[i], ft_strlen(tab[i]));
			ft_lstaddend(&lst, tmp);
		}
		i++;
	}
	return (lst);
}
