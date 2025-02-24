/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beergin <beergin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:26:08 by beergin           #+#    #+#             */
/*   Updated: 2024/07/03 21:48:51 by beergin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	n_;
	char	p_;

	p_ = 'P';
	n_ = 'N';
	if (n < 0)
	{
		write(1, &n_, 1);
	}
	else
	{
		write(1, &p_, 1);
	}
}
