/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beergin <beergin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:10:27 by beergin           #+#    #+#             */
/*   Updated: 2024/07/11 16:44:48 by beergin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tolow(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	check = 0;
	ft_tolow(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (check == 0)
				str[i] -= 32;
			check = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			check = 1;
		else
			check = 0;
		i++;
	}
	return (str);
}
