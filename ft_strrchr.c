/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:12:58 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 13:23:06 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int main ()
// {
// 	printf("%s", ft_strrchr("islom valiev",'m'));
// }
// bu funksiya bizga chappasiga keladi va bizga ohiridan 
// boshlab suragan narsamizdi chiara 
// out :m valiev buladi