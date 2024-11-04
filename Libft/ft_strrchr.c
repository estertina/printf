/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:08:02 by etina             #+#    #+#             */
/*   Updated: 2024/10/27 15:30:16 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		last;

	i = 0;
	last = 0;
	if ((char) c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if (s[last] != (char) c)
		return (NULL);
	return ((char *)&s[last]);
}
// int	main(void)
// {
// 	printf("mine: %s\n", ft_strrchr("helloiamstring", '\0'));
// 	printf("orig: %s\n", strrchr("helloiamstring", '\0'));
// }
