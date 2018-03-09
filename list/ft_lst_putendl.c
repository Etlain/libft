/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_putendl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 19:39:31 by mmouhssi          #+#    #+#             */
/*   Updated: 2018/03/09 16:35:22 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_lst_putendl(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	if (tmp == NULL)
		return ;
	while (tmp != NULL)
	{
		ft_putendl((char *)tmp->content);
		tmp = tmp->next;
	}
}
