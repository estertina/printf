/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:17:37 by etina             #+#    #+#             */
/*   Updated: 2024/10/27 15:27:54 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	ch = (unsigned char *)b;
	while (i < len)
	{
		ch[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[] = "Hello\n";
// 	printf("mine: %s\n", ft_memset(str, 65, 3));
// 	printf("orig: %s\n", memset(str, 65, 3));
// }