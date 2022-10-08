/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:35:48 by climpras          #+#    #+#             */
/*   Updated: 2022/10/08 15:13:52 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char const s1, char const *set)
{
	while (*set)
	{
		if (s1 == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		size;
	char	*str;
	int		j;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && check(s1[i], set) == 1)
		i++;
	while (s1[len - 1] && check(s1[len - 1], set) == 1)
		len--;
	size = len + 1 - i;
	if (size <= 0)
		return (malloc(1));
	str = malloc(sizeof(char) * size);
	if (!str)
		return (0);
	j = 0;
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{

	printf("%s\n", ft_strtrim("abcxyzabc", "abc"));
	printf("%s\n", ft_strtrim("dcxyzabc", "abc"));
	printf("%s\n", ft_strtrim("abcxyz", "abc"));
	printf("%s\n", ft_strtrim("xyz", "abc"));
	printf("%s\n", ft_strtrim("abcxyzc", ""));

	printf("%s\n", ft_strtrim("  \n", ""));
}
*/
