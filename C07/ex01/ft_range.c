/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:04:49 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/28 17:15:46 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range( int min, int max)
{
	int	*ret;
	int	*temp;

	if (min >= max)
		return (0);
	ret = (int*)malloc(sizeof(int) * ((long long)max - min));
	if(!ret)
		return (0);
	temp = ret;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}
  
/*int	main(void)
{
	printf("%p\n", ft_range(10, 10));	
	return (0);
}*/
