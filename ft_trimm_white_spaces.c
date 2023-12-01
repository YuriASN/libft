#include "libft.h"

/* Trimm all white spaces on the begginning and end of string */
void	ft_trimm_white_spaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (is_space(str[i]))
		i++;
	j = -1;
	while (str[i])
		str[++j] = str[i++];
	str[++j] = '\0';
	i = j;
	while (--i >= 0 && is_space(str[i]))
		str[i] = '\0';
}
