/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:05:00 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/25 21:32:55 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	if (!dst && !src)
		return (NULL);
	dst1 = dst;
	src1 = src;
	i = 0;
	if (src1 > dst1)
		dst1 = ft_memcpy(dst, src, len);
	else if (src1 < dst1)
	{
		while (len > 0)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	return ((void *)dst1);
}

// int	main(void)
// {
// 	char dst[] = "12345";
// 	char src[] = "789";
// 	printf("%s\n", ft_memmove(dst, src, 2));
// }