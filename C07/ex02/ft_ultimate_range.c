/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:25:55 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/28 17:43:16 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int	*temp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ret = max - min;
	*range= (int *)malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}

/*int	main(void)
{
	int x = 5;
	int *i = &x;
	printf("%d\n", ft_ultimate_range(&i, 10, 20));
	return (0);
}*/
