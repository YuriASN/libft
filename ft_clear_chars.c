#include "libft.h"

/* Deletes chars on the string from START bytes to END */
void	clear_chars(char *str, int start, int end)
{
	int	i;

	i = 0;
	if (!str || start >= end || (size_t)end > ft_strlen(str))
		return ;
	while (str[end + i])
	{
		str[start] = str[end + i];
		++i;
		++start;
	}
	str[start] = '\0';
}
