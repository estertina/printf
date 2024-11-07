/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:22:34 by etina             #+#    #+#             */
/*   Updated: 2024/11/07 17:24:32 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h> 
# include <stddef.h>  
# include "Libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_convert(unsigned long ptr, int *count);

#endif