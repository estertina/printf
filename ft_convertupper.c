/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:38:40 by etina             #+#    #+#             */
/*   Updated: 2024/11/09 16:02:32 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convertupper(unsigned long ptr, int *count)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (ptr >= 16)
		ft_convertupper(ptr / 16, count);
	*count += 1;
	write(1, &str[ptr % 16], 1);
}
