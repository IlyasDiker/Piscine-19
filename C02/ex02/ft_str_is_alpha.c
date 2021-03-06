/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 08:35:17 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/06 15:51:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') &&
		(str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
