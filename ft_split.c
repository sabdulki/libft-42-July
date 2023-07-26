/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:25:12 by sabdulki          #+#    #+#             */
/*   Updated: 2023/07/22 22:43:03 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_of_mini_str(const char *str, char sep)
{
	int	len;

	len = 0;
	while (str[len] != sep && str[len])
		len++;
	return (len);
}

int	count_words(const char *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sep && str[i + 1] == '\0')
			break ;
		else if (str[i] == sep && str[i + 1] != sep)
			words++;
		i++;
	}
	if (str[0] != sep)
		words++;
	return (words);
}

char	**ft_split(const char *arr, char sep)
{
	char	**main;
	int		word_counter;
	int		start;
	int		words;
	int		len_of_mini_str;

	if (!arr)
		return (0);
	word_counter = 0;
	start = 0;
	words = count_words(arr, sep);
	main = malloc(sizeof(char *) * (words + 1));
	if (main == 0)
		return (0);
	while (word_counter < words && arr[start])
	{
		while (arr[start] == sep)
			start++;
		len_of_mini_str = ft_len_of_mini_str(&arr[start], sep);
		main[word_counter] = ft_substr(arr, start, len_of_mini_str);
		start += len_of_mini_str;
		word_counter++;
	}
	main[word_counter] = 0;
	return (main);
}

// int main(void)
// {
//     char const *arr = "  a cat is  eating fish  ";
//     char sep = ' ';
//     char **result = ft_split(arr, sep);
//     while (*result)  //in start one and first string
//         printf("%s\n", *result++);
// }

/*
for count words:
	while (str[i] == sep)
		i++;
	if (str[i])
		words++;
	i += ft_len_of_mini_str(str+i, sep);
*/