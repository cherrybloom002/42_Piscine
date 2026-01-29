/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:47:49 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/29 09:56:45 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) =  *(src++);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*x;
	char	*temp;
	long long	strs_len;
	int	i;
	
	if (!size)
	{
		x = ((char *)malloc(1));
		x[0] = 0;
		return (x);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	x = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcat(x, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = 0;
	return (x);
}
