/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:04:48 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 17:45:33 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t l)
{
	size_t	i;

	i = 0;
	if (*n == '\0')
	{
		return ((char *)s);
	}
	i = ft_strlen((char *)n);
	while (*s != '\0' && l-- >= i)
	{
		if (*s == *n && ft_memcmp(s, n, i) == 0)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// int main ()
// {
// 	const char	*largestring = "Bar Foo Lpz";
// 	const char	*smallstring = "Bar";
//     char		*ptr;

// 	ptr = ft_strnstr(largestring, smallstring, 4);
// 	printf("%s",ptr); 
// }
// bu bizga 1 suzdi topadi boshqasi bulsa taxtdi chiqarmaydi
// outda hozi butun taxt chiqado