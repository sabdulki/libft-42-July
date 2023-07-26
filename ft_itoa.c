/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:32:12 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/22 22:39:16 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_char(long long n, char *str, int len)
{
	if (n == 0)
		str[len - 1] = '0';
	while (n > 0 && len >= 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	while (n < 0 && len > 0)
	{
		str[len - 1] = (n % 10 * (-1)) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

int	count_futue_chars(long long n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		res = 1;
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int num)
{
	char		*str;
	int			len;
	long long	nbr;

	nbr = num;
	len = count_futue_chars(num);
	str = malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	str = make_char(num, str, len);
	str[len] = '\0';
	return (str);
}

// int main (void)
// {
// 	int nbr = -2147483648LL;
// 	printf("%s\n", ft_itoa(nbr));
// 	printf("%s\n", itoa(nbr));
// }