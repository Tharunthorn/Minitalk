/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:17:53 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/20 21:13:51 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del || !lst)
		return ;
	while (lst[0])
	{
		temp = lst[0]->next;
		ft_lstdelone(lst[0], del);
		lst[0] = temp;
	}
}
