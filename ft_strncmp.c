/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:27:17 by climpras          #+#    #+#             */
/*   Updated: 2022/08/27 15:57:48 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2)
	{
		while (*s1 == *s2 && n > 1)
		{
			s1++;
			s2++;
			n--;
		}
		return (*s1 - *s2);
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	printf("%d\n", strncmp("abcd","abce", 3));
	printf("%d\n", ft_strncmp("abcd","abce", 3));

}
*/