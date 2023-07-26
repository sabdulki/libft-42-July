/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:32:38 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/25 21:05:56 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t times)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	if (!dst && !src)
		return (NULL);
	dst1 = dst;
	src1 = src;
	if (times == 0)
		return (dst1);
	i = 0;
	while (i < times)
	{
		dst1[i] = src1[i];
		i++;
	}
	return ((void *)dst1);
}

// int	main(void)
// {
// 	char src[100] = "";
// 	char dst[100];

// 	printf("%s\n", ft_memcpy(dst, src, 0));
// }