/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:08:16 by etina             #+#    #+#             */
/*   Updated: 2024/11/11 18:44:34 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	logic_x(unsigned long ptr, int *count, char c)
{
	if (c == 'x')
		ft_convert(ptr, count);
	else if (c == 'X')
		ft_convertupper(ptr, count);
}

void	ft_convert(unsigned long ptr, int *count)
{
	char	*str;

	str = "0123456789abcdef";
	if (ptr >= 16)
		ft_convert(ptr / 16, count);
	*count += 1;
	write(1, &str[ptr % 16], 1);
}

void	ft_convertupper(unsigned long ptr, int *count)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (ptr >= 16)
		ft_convertupper(ptr / 16, count);
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
