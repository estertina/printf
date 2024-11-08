/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:22:34 by etina             #+#    #+#             */
/*   Updated: 2024/11/08 21:26:50 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h> 
# include <stddef.h>

int		ft_printf(const char *format, ...);
void	ft_convert(unsigned long ptr, int *count);
void	ft_convertupper(unsigned long ptr, int *count);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putunsign(unsigned int n);
size_t	ft_strlen(const char *s);

#endif