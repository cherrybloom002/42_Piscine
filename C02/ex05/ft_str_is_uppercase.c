/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:53:19 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/20 15:46:00 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	s = "HELLO";
	x = ft_str_is_uppercase(s);
	printf("%d\n", x);
	return (0);
}*/
