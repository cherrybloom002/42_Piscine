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

void	initialize(char *str, int *attr, int array[4][4])
{
	//if column reached 4
	if (attr[1] == 4)
	{
		//reset index to zero
		attr[1] = 0;
		//move to next row
		attr[2] += 1;
	}
	//convert to int
	arr[attr[2]][attr[1]] = str[attr[0]] - 48;
	//move to next column
	attr[1]++;
	//move to next char in str
	attr[0]++;
}

int	input_to_array(char *str, int *attr, int array[4][4])
{
	//loop until end of string
	while (str[attr[0]] != '\0')
	{
		//if char is '1' and '4'
		if (str[attr][0] >= '1' && str[attr[0]] <= '4')
			//add to array
			initialize(str, attr, arr);
		//if space
		else if (str[attr[0]] == ' ')
			//skip
			attr[0]++,
		else
		{
			//error for invalid char
			write(1, "Error", 5);
			return (1);
		}
	}
	//if input too long
	if (attr[0] >=32)
	{
		//error
		write(1, "Error", 5);
		return (1);
	}
	//success
	return (0);
}
