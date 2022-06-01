/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:38:37 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/26 16:51:11 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*old;
	t_list	*new;
	void	*new_content;
	t_list	*temp;

	old = lst;
	new = NULL;
	while (old != NULL)
	{
		new_content = (*f)(old->content);
		temp = ft_lstnew(new_content);
		if (temp == NULL)
		{
			(*del)(new_content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		old = old->next;
	}
	return (new);
}
