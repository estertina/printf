/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:33:41 by etina             #+#    #+#             */
/*   Updated: 2024/11/11 18:51:50 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int	format_specifier(char specifier, va_list args, int *count)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'p')
	{
		write(1, "0x", 2);
		*count += 2;
		return (ft_convert((unsigned long)va_arg(args, void *), count), 0);
	}
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putunsign(va_arg(args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (logic_x((unsigned long)va_arg
				(args, unsigned int), count, specifier), 0);
	else if (specifier == '%')
	{
		write(1, "%", 1);
		return (*count += 1, 0);
	}
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;
	int		result;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			result = format_specifier(format[i], args, &count);
			if (result == -1)
				return (va_end(args), -1);
			count += result;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
