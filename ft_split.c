/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:13:24 by climpras          #+#    #+#             */
/*   Updated: 2022/10/12 11:59:08 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countword(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int	onoff;

	i = 0;
	count = 0;
	onoff = 0;
	
	size_t len = ft_strlen(s);
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && i != len - 1)
		{
			count++;
		}
		else if (s[i] != c && s[i + 1] == c && i != len - 1 && onoff == 0)
		{
			count++;
			onoff = 1;
		}
		if (s[i] != c)
			onoff = 1;
		i++;
	}
	if (onoff == 1)
		return (0);
	return (count);
}


char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	m;
	char	**arr;
	size_t	countChar;
	
	size_t words;
	
	if (!s)
		return (0);
	words = countword(s, c);
	printf("words = %ld\n", words);
	arr = (char **)malloc(words * (sizeof(char*)) + 1);
	if (!arr)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (i < words)
	{	
		countChar = 0;
		while (s[j] == c && s[j])
		{
			j++;
			k++;
		}
		while (s[j] != c && s[j])
		{
			countChar++;
			j++;
		}
//		printf("char = %ld\n", countChar);
		arr[i] = malloc((countChar + 1) * sizeof(char));
		if (!(arr[i]))
			return (0);
		m = 0;
		while (s[k] != c && s[k])
		{
			arr[i][m] = s[k];
//			printf("%c-", arr[i][m]);
			k++;
			m++;
		}
		arr[i][m] = '\0';
//		printf("\n");
		printf("%s\n", arr[i]);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

int	main(void)
{
//	char *s = "Hello";
//	char *s = "Hello__World";
//	char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	//char *s = "Hello";

//	char **split;
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
//	printf("%d\n"
}
