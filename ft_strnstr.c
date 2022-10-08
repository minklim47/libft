/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 02:15:01 by climpras          #+#    #+#             */
/*   Updated: 2022/10/08 15:05:23 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len < 1)
		return (0);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i + j] == needle[j]
				&& (i + j < len))
				j++;
			if (j == ft_strlen(needle))
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
/*
int	main(void){
	const	char	*haystack = "abxyabxyz";
	const	char	*needle = "xyz";
	size_t	len = ft_strlen;

	printf("%s\n", ft_strnstr(haystack, needle, len));
}
*/
