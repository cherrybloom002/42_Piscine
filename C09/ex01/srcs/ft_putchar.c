/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 09:46:50 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/15 11:53:12 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main()
{
        ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	
	return 0 ;
}*/
