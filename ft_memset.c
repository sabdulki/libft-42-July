/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:04:08 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/25 22:17:06 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int change_char, size_t how_many_times_change)
{
	size_t			i;
	unsigned char	*ch;

	ch = (unsigned char *)arr;
	i = 0;
	while (i < how_many_times_change)
	{
		ch[i] = (unsigned char)change_char;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	unsigned char	arr[15] = "12345";

// 	printf("%s\n", ft_memset(arr, 'n', 2));
// }
