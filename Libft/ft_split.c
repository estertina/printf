/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:49:49 by etina             #+#    #+#             */
/*   Updated: 2024/10/27 15:29:42 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			s++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_cpy(char const *s, char c, int *pos)
{
	int		current;
	int		length;
	char	*word;

	current = *pos;
	length = 0;
	while (s[current + length] && s[current + length] != c)
		length++;
	word = malloc((length + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + current, length + 1);
	*pos = *pos + length;
	return (word);
}

static void	ft_free(char **arr, int i)
{
	while (i > 0)
	{
		free(arr[i - 1]);
		i--;
	}
	free (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < ft_count(s, c))
	{
		if (s[pos] != c)
		{
			arr[i] = ft_cpy(s, c, &pos);
			if (!arr[i])
				return (ft_free(arr, i), NULL);
			i++;
		}
		else
			pos++;
	}
	arr[i] = NULL;
	return (arr);
}
