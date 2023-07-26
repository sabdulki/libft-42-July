/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:25:13 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/22 22:44:32 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big_arr;
	char	*small_arr;
	size_t	i_b;
	size_t	i_s;

	big_arr = (char *)haystack;
	small_arr = (char *)needle;
	i_b = 0;
	i_s = 0;
	if (ft_strlen(small_arr) == 0)
		return (big_arr);
	while (i_b < len && big_arr[i_b] != '\0')
	{
		if (big_arr[i_b] == small_arr[i_s])
		{
			while (i_b + i_s < len && big_arr[i_b + i_s] == small_arr[i_s]
				&& small_arr[i_s] && big_arr[i_b])
				i_s++;
			if (i_s == (size_t)ft_strlen(small_arr))
				return (&big_arr[i_b]);
		}
		i_b++;
		i_s = 0;
	}
	return (0);
}

// int main(void)
// {
// 	char *arr1 = "hi mya my friend"; //12
// 	char *arr2 = "my";
// 	size_t len = 10;
// i need check characters in big str
// and copmare if there are same chars in small str
// 	printf("%s\n", ft_strnstr(arr1, arr2, len));
// }