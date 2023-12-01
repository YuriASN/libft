#include "libft.h"

/* Adds "add" to end of dst realocating necessary memory freeing dst in the end.
	Returns a allocated new string. */
char	*ft_str_add(char *dst, char *add)
{
	char	*tmp;

	if (dst && dst[0])
		tmp = ft_strjoin(dst, add);
	else
		tmp = ft_strdup(add);
	if (dst)
		free(dst);
	return (tmp);
}
