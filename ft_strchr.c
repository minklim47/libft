/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:53:58 by climpras          #+#    #+#             */
/*   Updated: 2022/08/23 21:49:38 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{	
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (NULL);	
}

int	main(void)
{
	//printf("%s\n", strchr("hel", 'e'));
	printf("%s\n", ft_strchr("hel", 'a'));
	return (0);
}
