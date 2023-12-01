#include "libft.h"

/* Return TRUE if you don't have a str or is all white spaces */
int	ft_is_all_spaces(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (1);
	while (is_space(str[++i]))
		continue ;
	if (str[i])
		return (0);
	return (1);
}
