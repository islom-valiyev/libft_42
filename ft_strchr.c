/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 23:36:05 by ivaliev           #+#    #+#             */
/*   Updated: 2022/05/31 14:04:08 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s [i]);
		}
		i++;
	}
	if ((char) c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

// int main ()
// {
// 	char i[] = "hello";
// 	printf("%s",ft_strchr(i, 'l'));
// }
// bu bizga "l" dan boshla hamma harflar chiqaradi 
// bunda biz  int char oziga l di iscii qib oladi
// keyin unga qushadi
