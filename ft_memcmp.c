/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:33:44 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/30 11:17:45 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*m;
	const unsigned char	*j;
	size_t				i;

	i = 0;
	m = (const unsigned char *)s1;
	j = (const unsigned char *)s2;
	while (i < n)
	{
		if (m[i] != j[i])
			return (m[i] - j[i]);
		i++;
	}
	return (0);
}

// buu 2 ta sttrdi hotirasini solishtiradi qaysi katta 
//  bulsa ushni nechi bayt katta ekanligini kursatadi