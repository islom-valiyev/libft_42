/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:41:09 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 13:36:48 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	c = 0;
	i = 0;
	while (src[c])
	{
		c++;
	}
	while (src[i] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
	{
		dst[i] = '\0';
	}
	return (c);
}

// int main ()
// {
//     char d[] = {"xyz"};
//     char s[] = {"ccccc"};
//     printf("d: %zu", ft_strlcpy(d, s, 4));  
//     return (0);
// }
// bunda hozi copy qildu s ni d ga 
// almashtirdi va uni uzunligini chiqardi 
// out : d : 5 
