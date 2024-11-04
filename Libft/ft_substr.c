/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:23:34 by etina             #+#    #+#             */
/*   Updated: 2024/10/24 12:31:20 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	i = -1;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (++i < len && s[start + i] != '\0')
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char s[100] = "Hello, Ester! It's me.";
// 	printf("name = %s\n", ft_substr(s, 7, 500));
// 	return 0;
// }
