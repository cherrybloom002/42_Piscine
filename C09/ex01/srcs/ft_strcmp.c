/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:53:23 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/21 10:44:18 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	x[] = "durdal";
	char	y[] = "ladrud";
	int	result;
	int	res2;

	result = ft_strcmp(x, y);
	res2 = strcmp(x, y);
	if(result > 0)
                printf("greater\n");
        else if (res2 < 0)
                printf("less\n");
        else
                printf("equal\n");
	if(res2 > 0)
		printf("greater\n");
	else if (res2 < 0)
		printf("less\n");
	else
		printf("equal\n");
	return (0);
}*/
