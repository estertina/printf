/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:49:14 by etina             #+#    #+#             */
/*   Updated: 2024/11/09 16:02:46 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	int	count;

	count = 0;
	write(1, &c, 1);
	count++;
	return (count);
}

// int	main(void)
// {
// 	ft_putchar(53);
// 	return (0);
// }