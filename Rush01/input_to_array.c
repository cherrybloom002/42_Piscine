/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:59:58 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/24 17:27:29 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize(char *str, int *attr, int arr[4][4])
{
	if (attr[1] == 4)
	{
		attr[1] = 0;
		attr[2] += 1;
	}
	arr[attr[2]][attr[1]] = str[attr[0]] - 48;
	attr[1]++;
	attr[0]++;
}

int	input_to_array(char *str, int *attr, int array[4][4])
{
	while (str[attr[0]] != '\0')
	{
		if (str[attr][0] >= '1' && str[attr[0]] <= '4')
			initialize(str, attr, arr);
		else if (str[attr[0]] == ' ')
			
	}
}
