/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:54:43 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/26 21:45:09 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// return last occurance of character

char	*ft_strrchr(const char *c, int ch)
{
	int		i;
	char	*arr;
	int		len;

	i = 0;
	arr = (char *)c;
	len = ft_strlen(arr);
	while (i <= len)
	{
		if (arr[len] == (char)ch)
			return (&arr[len]);
		len--;
	}
	return (0);
}

// int main (void)
// {
// 	char *arr = "gasbbhaybbsya";
// 	printf("%s\n", ft_strrchr(arr, 'y'));
// }