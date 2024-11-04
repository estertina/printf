/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:43:37 by etina             #+#    #+#             */
/*   Updated: 2024/10/29 16:16:16 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			c = 0;
			while (i + c < len && haystack[i + c] == needle[c])
			{
				if (needle[c + 1] == '\0')
					return ((char *)haystack + i);
				c++;
			}
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char *l[2];
// 	l[0] = NULL;
// 	l[1] = "";

// 	int len = 0;
// 	printf("my: %s\n", ft_strnstr(l[0], l[1], len));
// 	printf("original: %s\n", strnstr(l[0], l[1], len));
// }