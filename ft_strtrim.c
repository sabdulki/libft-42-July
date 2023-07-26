/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:25:12 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/22 22:44:45 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		length;
	int		i;
	char	*res;

	start = 0;
	i = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	length = ft_strlen(s1);
	while (length > start && ft_strchr(set, s1[length - 1]))
		length--;
	res = malloc(sizeof(char) * (length - start + 1));
	if (!res)
		return (NULL);
	while (start < length)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

// int main(void)
// {
// 	char arr1[] = "          ";
// 	char arr2[] = " ";

// 	printf("%s\n", ft_strtrim(arr1, arr2));
// }