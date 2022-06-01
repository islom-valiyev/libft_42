/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:30:23 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 14:40:32 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstr;
	char	*srcr;

	dstr = (char *)dst;
	srcr = (char *)src;
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		while (len--)
		{
			dstr[len] = srcr[len];
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			*dstr++ = *srcr++;
		}
		return (dst);
	}
}

// int main()
// {
// 	char i[] = "good";
// 	char c[] = "hello";

// 	printf("n: %s\n", ft_memmove(&i, &c, 5));
// 	return (0);
// }
// bunda bizdi hotira kuchadi boshqa joyga 