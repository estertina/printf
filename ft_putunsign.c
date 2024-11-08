/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:51:43 by etina             #+#    #+#             */
/*   Updated: 2024/11/08 21:05:36 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putunsign(unsigned int n)
{
	if (n > 9)
		ft_putunsign(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}