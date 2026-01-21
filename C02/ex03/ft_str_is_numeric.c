/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:53:19 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/20 13:03:18 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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

	s = "58464684864r";
	x = ft_str_is_numeric(s);
	printf("%d\n", x);
	return (0);
}*/
