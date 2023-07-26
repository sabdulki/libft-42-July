/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:59:21 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/26 18:47:03 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *arr, size_t times)
{
	ft_memset(arr, 0, times);
}

// int	main(void)
// {
// 	// char	arr[10];

// 	char arr [10]= "12345";
// 	ft_bzero(arr, 0);
// 	printf("%s\n", arr);
// }
