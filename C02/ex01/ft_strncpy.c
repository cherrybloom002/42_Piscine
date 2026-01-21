/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:34:13 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/21 10:07:13 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

/*int	main(void)
{
	char	s1[] = "dt1yvm3teqw5ldb1j3ui95td";
	char	s2[64];

	printf("%s\n", s1);
	ft_strncpy(s2, s1, 13);
	printf("%s\n", s2);
	return(0);
}*/
