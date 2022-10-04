/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:13:24 by climpras          #+#    #+#             */
/*   Updated: 2022/10/03 23:54:27 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	countWords;
	int	i;
	int	j;
	int	k;
	char	**arr;
	int	countChar;
	int	len;

	len = ft_strlen(s);
	countWords = 0;
	i = 0;
	while (s[i] != '\0') // count the total words
	{
		if (s[i] == c && s[i + 1] != c && i != len - 1)
			countWords++;
		i++;
	}
	arr = malloc(countWords);
	countChar = 0;
	i = 0;
	j = 0;
	
	while (*s)
	{	
		while (*s == c)
			s++;
		while (*s++ != c)
			countChar++;
		arr[i] = malloc(countChar);
		while (s[j] == c)
			j++;
		k = 0;
		while (s[j] != c)
		{
			arr[i][k] = s[j];
			j++;
		}
		free(arr[i]);
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	char *s = "_Hello_  _asf__World__";
	char c = '_';
	int x = ft_split(s,c);
	printf("%d\n", x);
}
*/
