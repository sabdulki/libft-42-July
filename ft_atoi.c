/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:35:44 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/26 22:18:32 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *arr)
{
	int	i;
	int	minus;
	int	res;

	i = 0;
	minus = 1;
	res = 0;
	while (arr[i] == 32 || (arr[i] >= 9 && arr[i] <= 13))
		i++;
	if (arr[i] == '-')
	{
		minus *= -1;
		i++;
	}
	else if (arr[i] == '+')
		i++;
	while (arr[i] != '\0' && arr[i] >= '0' && arr[i] <= '9')
	{
		if (minus == 1 && res * 10 < res)
			return (-1);
		if (minus == -1 && res * 10 < res)
			return (0);
		res = (res * 10) + arr[i++] - '0';
	}
	return (res * minus);
}

// int main(void)
// {
// 	// char* arr = "+-54";// " +/-1234567890"
// 	printf("%d\n", ft_atoi("-21474836479765576575776"));
// 	printf("%d\n", atoi("-21474836479765576575776"));
// }