/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:53:23 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/21 12:08:20 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	x[] = "hello";
	char	y[] = "hel";
	int	result;
	int	res2;

	result = ft_strncmp(x, y, 4);
	res2 = strncmp(x, y, 4);
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
