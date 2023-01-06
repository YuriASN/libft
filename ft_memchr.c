/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:31:43 by ysantos-          #+#    #+#             */
/*   Updated: 2023/01/06 22:07:09 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* searches for the FIRST occurrence of the character c (an unsigned char)
in the first n bytes of the string pointed to, by the argument str.
This function returns a pointer to the matching byte
or NULL if the character does not occur in the given memory area. */
void	*ft_memchr(const void *str, int c, size_t bytes)
{
	size_t	index;

	index = 0;
	while (index < bytes)
	{
		if (((unsigned char *)str)[index] == (unsigned char)c)
			return ((void *)(str + index));
		index++;
	}
	return (0);
}

/* int	main(void)
{
	const char	str[] = "https://profile.intra.42.fr/";
	const char	ch = 'i';
	char		*ret;

	ret = ft_memchr(str, ch, ft_strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
} */
