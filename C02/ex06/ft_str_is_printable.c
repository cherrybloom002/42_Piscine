/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:53:19 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/20 16:48:44 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '!' && str[i] <= '~')
			i++;
		else if (str[i] == '\0')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	int		x;
	char	*s;

	s = "ide!&&";
	x = ft_str_is_printable(s);
	printf("%c\n", x);
	return (0);
}*/
