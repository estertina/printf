/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:36:58 by etina             #+#    #+#             */
/*   Updated: 2024/10/20 18:18:48 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if ((d == NULL) && (s == NULL))
		return (NULL);
	if (s < d)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dst[] = "thisisastring";
// 	printf("%s\n", ft_memmove(dst, src, 5));
// 	printf("%s\n", memmove(dst, src, 5));
// }