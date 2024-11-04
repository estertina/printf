/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:30:07 by etina             #+#    #+#             */
/*   Updated: 2024/10/29 16:16:31 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	size_t		cnt2;
	char		*str;

	i = 0;
	cnt2 = count * size;
	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	while (i < cnt2)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
