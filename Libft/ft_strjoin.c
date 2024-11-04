/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:10:43 by etina             #+#    #+#             */
/*   Updated: 2024/10/27 15:29:54 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			c;
	char			*newstr;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	c = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	newstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (newstr == NULL)
		return (NULL);
	while (str1[i])
	{
		newstr[i] = str1[i];
		i++;
	}
	while (str2[c])
		newstr[i++] = str2[c++];
	newstr[i] = '\0';
	return (newstr);
}
