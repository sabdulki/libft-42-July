/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:13:16 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/22 22:39:38 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t		i;
	const char	*s1;
	const char	*s2;

	i = 0;
	s1 = (const char *)arr1;
	s2 = (const char *)arr2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			i++;
	}
	return (0);
}

// int main(void)
// {
// 	char *arr1 = "hellt";
// 	char *arr2 = "hello";
// 	size_t n = 5;

// 	printf("%d\n", ft_memcmp(arr1, arr2, n));
// }