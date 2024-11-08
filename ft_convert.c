/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:08:16 by etina             #+#    #+#             */
/*   Updated: 2024/11/08 21:24:28 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(unsigned long ptr, int *count)
{
	char	*str;

	str = "0123456789abcdef";
	if (ptr >= 16)
		ft_convert(ptr / 16, count);
	*count += 1;
	write(1, &str[ptr % 16], 1);
}

// #include <unistd.h>
// int main() {
//     int value = 42;
//     int count = 0;
//     ft_convert((unsigned long)&value, &count);
//     return 0;
// }
