/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:23:01 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/22 22:43:41 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i_len;
	size_t	i_main;
	char	*main_arr;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i_len = 0;
	i_main = 0;
	main_arr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (main_arr == 0)
		return (0);
	while (i_len < s1_len)
		main_arr[i_main++] = s1[i_len++];
	i_len = 0;
	while (i_len < s2_len)
		main_arr[i_main++] = s2[i_len++];
	main_arr[i_main] = '\0';
	return (main_arr);
}

// int main(void)
// {
// 	const char *arr1 = "hello my ";
// 	const char *arr2 = "friend";

// 	printf("%s\n", ft_strjoin(arr1, arr2));
// }