/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:45:37 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/18 12:58:33 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int w, char a, char b, char c)
{
	int	j;

	j = 0;
	while (j < w)
	{
		if (j == 0)
			ft_putchar(a);
		else
		{
			if (j == w - 1)
				ft_putchar(c);
			else
				ft_putchar(b);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			line(x, '/', '*', '\\');
		else
		{
			if (i == y - 1)
				line(x, '\\', '*', '/');
			else
				line(x, '*', ' ', '*');
		}
		i++;
	}
}
