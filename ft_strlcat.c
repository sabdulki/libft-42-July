/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:10:51 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/26 22:14:33 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*concatenate strings and prints output until the destsize in square brakets
returns the combined length of both src and dst strings
(not counting their terminating null characters).*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize_sq_br)
{
	size_t	i;
	size_t	dstlength;
	size_t	srclength;

	i = 0;
	if (!dstsize_sq_br && !dst)
		return (0);
	srclength = ft_strlen(src);
	dstlength = ft_strlen(dst);
	if (dstlength >= dstsize_sq_br)
		return (dstsize_sq_br + srclength);
	while (src[i] && dstlength + 1 < dstsize_sq_br)
	{
		dst[dstlength] = src[i];
		dstlength++;
		i++;
	}
	dst[dstlength] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/*
int	main(void)
{
	char *dst = "a"; //always needs + 1 for '\0'
	char src1[] = "lorem ipsum dolor sit amet";
	int dstsize = 15;
	size_t res = ft_strlcat(dst, src1, dstsize);

	printf("%lu\n", res); // dstsize with '\0'
	printf("%s\n", dst);
}*/