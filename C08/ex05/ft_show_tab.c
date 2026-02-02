/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:07:01 by ahodor            #+#    #+#             */
/*   Updated: 2026/02/02 11:31:19 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].str[j])
			ft_putchar(par[i].str[j++]);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		j = 0;
		while (par[i].copy[j])
			ft_putchar(par[i].copy[j++]);
		ft_putchar('\n');
		i++;
	}
}
