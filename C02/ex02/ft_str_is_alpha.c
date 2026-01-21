/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:53:19 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/21 09:59:30 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
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

	s = "Hello world";
	x = ft_str_is_alpha(s);
	printf("%d\n", x);
	return (0);
}*/
