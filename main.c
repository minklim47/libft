/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:51:01 by climpras          #+#    #+#             */
/*   Updated: 2022/10/13 11:54:18 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	s1[] = "12345678";
	memset(s1, '1', 5);
	printf("%s\n", s1);

	char	s2[] = "12345678";
	ft_memset(s2, '1', 6);
	printf("%s\n", s2);
}
