/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:51:43 by etina             #+#    #+#             */
/*   Updated: 2024/11/09 16:03:46 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

int	ft_putunsign(unsigned int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
	{
		write(1, "2147483648", 10);
		return (10);
	}
	if (n > 9)
		count += ft_putunsign(n / 10);
	write(1, &"0123456789"[n % 10], 1);
	count++;
	return (count);
}
