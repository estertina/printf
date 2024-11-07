/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:33:41 by etina             #+#    #+#             */
/*   Updated: 2024/11/07 15:42:10 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

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
				ft_putchar_fd(va_arg(args, char), 1);
				count++;
			}
			if (format[i] == 's')
			{
				ft_putstr_fd(va_arg(args, char *), 1);
				count+= ft_strlen(va_arg(args, char *));
			}
			if (format[i] == 'p')
			{
				write(1, "0x", 2);
				count += 2;
				ft_convert((unsigned long)va_arg(args, void *), &count);
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}


// int	main()
// {
// 	ft_printf("Hello%c", 'u');
// 	printf("Hello%c", 'u');
// 	return (0);
// }