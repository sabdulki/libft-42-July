/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:04:47 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/26 21:27:24 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The calloc() function contiguously allocates enough space for count objects
that are size bytes of memory each and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value zero.

return a pointer to allocated memory.
If there is an error, they return a NULL pointer and set errno to ENOMEM */

// num = number of elements in an array
// size = size of 1 element in bytes

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*arr;
	size_t			total;

	if (size && (SIZE_MAX / size) < num)
		return (NULL);
	total = (num * size);
	arr = malloc(total);
	if (!arr)
		return (NULL);
	ft_bzero(arr, num * size);
	return (arr);
}

// int main(void)
// {
// 	printf("%p \n", calloc(0,5));
// 	printf("%p \n", ft_calloc(0, 5));
// }