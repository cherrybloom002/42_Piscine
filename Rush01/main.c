/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:31:40 by ahodor            #+#    #+#             */
/*   Updated: 2026/01/24 16:59:44 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Functions prototype
int	input_to_array(char *str, int *attr, int array[4][4]);

//Int main
int	main(int argc, char **argv)
{
	//declare variables
	int	i;
	int	array[4][4];
	int	attr[3];

	//check if exactly one argument is passed
	if (argc == 2)
	{
		i = -1;
		while (i++ < 3)
			attr[i] = 0;
		//set bottom right corner to -1 for placeholder
		array[3][3] = -1;
		if (input_to_array(argv[1], attr, array) == 1)
			return (0);
		solve(array);
	}
	else
		//print error
		write(1, "Error", 5);
	return (0);
}
