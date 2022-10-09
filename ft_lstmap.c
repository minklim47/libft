/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:11:04 by climpras          #+#    #+#             */
/*   Updated: 2022/10/09 23:42:50 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
//	int	onoff;
//	t_list	*head;

	if (!lst)
		return (0);
	while (lst -> next)
	{
		new = ft_lstnew((*f)(lst -> content));
		(*del)(lst -> content);
		lst = lst -> next;
		new -> next = lst;
		new = new -> next;
	}
	return (new);
}
