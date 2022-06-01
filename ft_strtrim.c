/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:54:14 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 13:32:22 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*m;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	m = ft_substr((char *)s1, 0, i + 1);
	return (m);
}

// int main ()
// {
// 	printf("%s", ft_strtrim(" islom ", " " ));
// }
// bunda bizda hozi bush joydi ochirsi chunki
// biz aytgan ekain bush joy deb 
// out hozi islom buladi bush joysiz