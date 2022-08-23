/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:44:55 by climpras          #+#    #+#             */
/*   Updated: 2022/08/23 22:02:30 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	const	char	*last;
	int	len;
	int	count;
	
	len = ft_strlen(s);
	count = 0;
	while (*s != '\0')
	{
		
		if (*s == c)
		{
			last = s;
		}
		s++;
		len++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	if (len == count){
		return (NULL);
	}
	return ((char *)last);
}

int	main(void)
{
	printf("%s\n", strrchr("Helllo", 'a'));
	printf("%s\n", ft_strrchr("Hello", 'a'));
}
