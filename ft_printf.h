/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:22:34 by etina             #+#    #+#             */
/*   Updated: 2024/11/11 18:52:06 by etina            ###   ########.fr       */
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
void	logic_x(unsigned long ptr, int *count, char c);
void	ft_convert(unsigned long ptr, int *count);
void	ft_convertupper(unsigned long ptr, int *count);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putunsign(unsigned int n);
size_t	ft_strlen(const char *s);
#endif