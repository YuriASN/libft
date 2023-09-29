/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:06:49 by ysantos-          #+#    #+#             */
/*   Updated: 2023/09/29 22:08:32 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compares at most the first n bytes of str1 and str2.
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str1 && !str2)
		return (0);
	if (!str1 || !str2)
		return (1);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
		if (!str1[i] && !str2[i])
			break ;
		++i;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[15] = "abcdef";
	char	str2[15] = "abcdef";
	int		ret;

	ret = ft_strncmp(str1, str2, 4);
	if (ret < 0)
		printf("str1 is less than str2\n");
	else if (ret > 0)
		printf("str2 is less than str1\n");
	else
		printf("str1 is equal to str2\n");
	return (0);
} */
