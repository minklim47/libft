/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:13:24 by climpras          #+#    #+#             */
/*   Updated: 2022/10/12 12:56:43 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int    count(const char *str, int c)
{
    int    count;

    count = 0;
    while (*str != '\0')
    {
        if (*str == c && *(str + 1) != c && *(str + 1) != '\0')
            count++;
        str++;
    }
    return (count);
}

char    *find_word(const char *str, int index, int end)
{
    int    i;
    int    tempindex;
    char    *word;

    i = 0;
    tempindex = index;
    if (end == index)
        return (0);
    word = malloc(end - index + 1);
    if (!word)
        return (0);
    while (index < end)
        word[i++] = str[index++];  
    word[i] = 0;
    return (word);
}

char    **ft_split(const char *s, char c)
{
    int        i;
    int        j;
    int        tempi;
    char    **ans;

    i = 0;
    j = 0;
    if (!s)
        return (0);
    ans = malloc(sizeof(char *) * (count(s, c) + 1));
    if (!ans)
        return (0);
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        if (i == 0 || (s[i] != '\0' && s[i] != c && s[i - 1] == c))
        {
            tempi = i;
            while (s[i] != c && s[i] != '\0')
                i++;
            ans[j++] = find_word(s, tempi, i);
        }
    }
    ans[j] = 0;
    return (ans);
}
