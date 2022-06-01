/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:10:02 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 14:00:03 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ij;
	char	*j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	j = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!j)
		return (NULL);
	i = 0;
	ij = 0;
	while (s1[i])
	{
		j[ij++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		j[ij++] = s2[i];
		i++;
	}
	j[ij] = 0;
	return (j);
}

// int main ()
// {
// 	printf("%s",ft_strjoin("hi","hi"));
// }
// s1	pointer = hi
// s2	pointer = hi		
// i	size_t  = 2
// ij	size_t  = 4 bu str soni 
// j	pointer = 'h''i''h''i' '\0'
// bu bizga 2 ta str di qushib berebdi bittamemoryga