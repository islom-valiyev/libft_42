/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:20:34 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 14:46:06 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main()
// {
//     char byte[5] = {1, 3, 'f', 2, 0};
//     ft_bzero(byte, 5);
//     int i = 0;
//     while (i < 5)
//     {
//         printf("%d", byte[1]);
//         /* code */
//         i++;
//     }
//     return (0);
// }
// bu bizga hammasini 0 g aaylantiradi