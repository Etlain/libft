/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 11:36:14 by mmouhssi          #+#    #+#             */
/*   Updated: 2019/01/27 23:15:45 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factorial(int nb)
{
	if (nb > 1 && nb < 13)
	{
		nb = nb * ft_factorial(nb - 1);
		return (nb);
	}
	else if ((nb == 1) || (nb == 0))
		return (1);
	else
		return (0);
}
