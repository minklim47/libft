/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:46:55 by climpras          #+#    #+#             */
/*   Updated: 2022/10/12 22:17:55 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countword(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		onoff;

	i = 0;
	count = 0;
	onoff = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != c && onoff == 0)
		{
			onoff = 1;
			count++;
		}
		else if (i != ft_strlen(s) - 1 && s[i] == c && s[i + 1] != c)
		{
			onoff = 1;
			count++;
		}
		i++;
	}
	return (count);
}

size_t	countchar(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	*putword(char const *s, char c)
{
	size_t	j;
	char	*word;
	size_t	chars;

	word = (char *)malloc((countchar(s, c) + 1) * sizeof(char));
	if (!word)
		return (0);
	j = 0;
	chars = countchar(s, c);
	while (j < chars && *s)
	{
		word[j] = *s;
		s++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**arr;
	size_t	words;

	if (!s)
		return (0);
	words = countword(s, c);
	arr = (char **)malloc((words + 1) * (sizeof(char *)));
	if (!arr)
		return (0);
	i = 0;
	while (i < words && *s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			arr[i] = putword(s, c);
		while (*s != c && *s)
			s++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
/*
int     main(void)
{

//      char *s = "Hello";
//      char *s = "Hello__World";
        //char *s = "Hello";

//      char **split;
        char *s1 = "Hello World";
        char *s2 = "Hello    World";
        char *s3 = "  Hello World";
        char *s4 = "   Hello World   ";
        char *s5 = "Hello";
        char *s6 = "Hello  ";
        char *s7 = "  Hello";
        char *s8 = "";
        char *s9 = "    ";
        char c = ' ';

        ft_split(s1, c);
        printf ("===1===\n");
        ft_split(s2, c);
        printf ("===2===\n");
        ft_split(s3, c);
        printf ("===3===\n");
        ft_split(s4, c);
        printf ("===4===\n");
        ft_split(s5, c);
        printf ("===5===\n");
        ft_split(s6, c);
        printf ("===6===\n");
        ft_split(s7, c);
        printf ("===7===\n");
        ft_split(s8, c);
        printf ("===8===\n");
        ft_split(s9, c);
        printf ("===9===\n");
        printf("\n");

	char *machine2 = "lorem ipsum dolor si===
	ft_split(machine2, ' ');
}*/
