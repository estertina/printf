/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:33:41 by etina             #+#    #+#             */
/*   Updated: 2024/11/08 21:34:35 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h> 
# include <stddef.h>

int ft_printf(const char *format, ...)
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
			{
				ft_putchar(va_arg(args, int));
				count++;
			}
			if (format[i] == 's')
			{
				ft_putstr(va_arg(args, char *));
				count += ft_strlen(va_arg(args, char *));
			}
			if (format[i] == 'p')
			{
				write(1, "0x", 2);
				count += 2;
				ft_convert((unsigned long)va_arg(args, void *), &count);
			}
			if (format[i] == 'd' || format[i] == 'i')
			{
				ft_putnbr(va_arg(args, int));
				count++;
			}
			if (format[i] == 'u')
			{
				ft_putunsign(va_arg(args, int));
				count++;
			}
			if (format[i] == 'x')
			{
				write(1, "0x", 2);
				count += 2;
				ft_convert((unsigned long)va_arg(args, int), &count);
			}
			if (format[i] == 'X')
			{
				write(1, "0x", 2);
				count += 2;
				ft_convert((unsigned long)va_arg(args, int), &count);
			}
			if (format[i] == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else
				write(1, "-1", 2);
		}
		i++;
	}
	va_end(args);
	return (count);
}


// int	main()
// {
// 	ft_printf("Hello%X", 'u');
// 	printf("Hello%X", 'u');
// 	return (0);
// }