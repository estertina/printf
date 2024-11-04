/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:22:04 by etina             #+#    #+#             */
/*   Updated: 2024/10/21 17:31:31 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((unsigned char)str1[i] > (unsigned char)str2[i])
			return (str1[i] - str2[i]);
		else if ((unsigned char)str1[i] < (unsigned char)str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
