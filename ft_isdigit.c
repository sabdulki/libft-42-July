/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:02:48 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/20 19:32:02 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	if (d >= 48 && d <= 57)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	result;

// 	result = ft_isdigit(50);
// 	printf("%d\n", result);
// }
