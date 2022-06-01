/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:48:34 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 13:33:21 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*m;
	unsigned char	*b;

	m = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (m[i] || b[i]))
	{
		if (m[i] > b[i])
			return (1);
		if (m[i] < b[i])
			return (-1);
		i++;
	}
	return (0);
}
