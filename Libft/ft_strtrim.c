/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:17:41 by etina             #+#    #+#             */
/*   Updated: 2024/10/27 15:30:22 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < end - start)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int	main()
// {
// 	char	str[] = ",,,,hello,, whaddup,hh,,,";
// 	char	*set = ",h";
// 	printf("%s", ft_strtrim(str, set));
// 	return 0;
// }