/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:53:12 by climpras          #+#    #+#             */
/*   Updated: 2022/10/13 11:15:29 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	dest = (char *)malloc((sizeof(char) * len) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (len-- > 0 && s[start] != '\0')
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("HelloWorld", 5, 4));	
}	
*/
