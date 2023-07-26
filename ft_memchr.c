/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:32:11 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/26 21:39:28 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int ch, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == (unsigned char)ch)
			return (&arr[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *arr1 = "holt";
// 	printf("%s\n", ft_memchr(arr1, 'z', 10));
// }