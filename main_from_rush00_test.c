/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:01:40 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/21 16:36:06 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
/*
int	ft_convert(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		else
			return (0);
	}
	return (res);
}*/

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc < 2)
		return (1);
	x = argv[1][0] - '0';       //ft_convert(argv[1]);
	y = argv[2][0] - '0';       //ft_convert(argv[2]);
	rush(x, y);
	return (0);
}
