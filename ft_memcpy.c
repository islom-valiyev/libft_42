/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:49:00 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/20 17:02:21 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dest == source || !n)
	{
		return (dest);
	}
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

// int main ()
// {
// 	char m[6]= "hello";
// 	char n[7];
// 	char *p;
// 	printf("%s",ft_memcpy(n,m,7));
// }