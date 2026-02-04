/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 08:52:30 by ahodor            #+#    #+#             */
/*   Updated: 2026/02/04 08:59:48 by ahodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && (i == 0 || is_sep(str[i - 1], charset)))
			count++;
		i++;
	}
	return (count);
}

char	*word_dup(char *str, char *charset, int *index)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = *index;
	while (str[i] && !is_sep(str[i], charset))
	{
		len++;
		i++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[*index] && !is_sep(str[*index], charset))
	{
		word[i++] = str[*index];
		(*index)++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = count_words(str, charset);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], charset))
		{
			result[j++] = word_dup(str, charset, &i);
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
