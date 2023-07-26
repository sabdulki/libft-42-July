/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:47:14 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/26 22:20:32 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns pointer to found char

char	*ft_strchr(const char *c, int ch)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)c;
	while (arr[i] != '\0')
	{
		if (arr[i] == (char)ch)
			return (&arr[i]);
		i++;
	}
	if (arr[i] == (char)ch)
		return (&arr[i]);
	return (0);
}

// last if statement is for '\0'

// int main(void)
// {
// 	char * arr = "sofioa";
// 	printf("%s\n", ft_strchr(arr, 'o'));
// }