/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:39:54 by ahodor            #+#    #+#             */
/*   Updated: 2026/02/05 09:40:37 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_intervals(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, " ", 1);
		}
		i++;
	}
}

int	main(void)
{
	char	*c = "It's a wonderful world";
	
	ft_print_intervals(c);
	return (0);
}
