/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 14:38:16 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/09/26 14:39:19 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double ft_fabs(double nbr)
{
	return (nbr > 0 ? nbr : (nbr * -1));
}
