/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:59:43 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/29 10:58:45 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

/*int	main(void)
{
	char	*src = "Hello World";
	printf("%s\n", ft_strdup(src));
	return (0);
}*/
