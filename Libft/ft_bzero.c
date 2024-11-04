/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:22:17 by etina             #+#    #+#             */
/*   Updated: 2024/10/19 10:35:07 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int	main(void)
// {
// 	char	str[] = "Hello\n";

// 	ft_bzero(str, 3);
// 	bzero(str,3);

// 	printf("mine: %s\n", str);
// 	printf("orig: %s\n", str);

// 	return (0);
// }