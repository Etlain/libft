/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 18:32:43 by mmouhssi          #+#    #+#             */
/*   Updated: 2018/01/05 19:30:08 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel_elem(t_list **lst)
{
	t_list *tmp;

	if ((*lst)->next != NULL)
	{
		tmp = (*lst)->next;
		free((*lst)->content);
		(*lst)->content = tmp->content;
		(*lst)->content_size = tmp->content_size;
		(*lst)->next = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	else
	{
		free((*lst)->content);
		free(*lst);
		lst = NULL;
	}
}
