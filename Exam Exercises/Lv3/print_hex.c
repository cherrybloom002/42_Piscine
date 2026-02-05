/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:37:16 by ahodor            #+#    #+#             */
/*   Updated: 2026/02/05 11:16:14 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	r;
	int	sign;

	r = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || * str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		r = r * 10 + *str++ - '0';
	return (r * sign);
}

void	ft_print_hex( int nb)
{
	if (nb >= 16)
		ft_print_hex(nb / 16);
	nb = nb % 16;
	if (nb < 10)
		nb += '0';
	else
		nb += 'a' - 10;
	write(1, &nb, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
