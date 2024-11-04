/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:07:55 by etina             #+#    #+#             */
/*   Updated: 2024/10/25 21:44:25 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		z;

	z = 0;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = count_len(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		z = 1;
		str[0] = '-';
		n = n * -1;
	}
	while (len - z > 0)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
