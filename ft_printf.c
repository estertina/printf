/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:33:41 by etina             #+#    #+#             */
/*   Updated: 2024/11/09 16:04:26 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'p')
			{
				write(1, "0x", 2);
				count += 2;
				ft_convert((unsigned long)va_arg(args, void *), &count);
			}
			else if (format[i] == 'd' || format[i] == 'i')
				count += ft_putnbr(va_arg(args, int));
			else if (format[i] == 'u')
				count += ft_putunsign(va_arg(args, unsigned int));
			else if (format[i] == 'x')
				ft_convert((unsigned long)va_arg(args, unsigned int), &count);
			else if (format[i] == 'X')
				ft_convertupper((unsigned long)va_arg(args, unsigned int),
					&count);
			else if (format[i] == '%')
				count += write(1, "%", 1);
			else
				return (-1);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	ft_printf("Hello%X", 44);
// 	printf("\nHello%X\n", 44);
// 	return (0);
// }