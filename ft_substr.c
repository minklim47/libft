/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:53:12 by climpras          #+#    #+#             */
/*   Updated: 2022/08/30 23:29:02 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int	i;
	
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (dest);
	i = 0;
	while (len > 0 && s[start] != '\0')
	{
		dest[i] = s[start];
		i++;
		start++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}

/*

int	main(void)
{
	printf("%s\n", ft_substr("HelloWorld", 5, 4));	
}	
*/
