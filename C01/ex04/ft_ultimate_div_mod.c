/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:57:35 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/19 15:38:22 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int	x;
	int	y;	

	x = 25;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return(0);
}*/
