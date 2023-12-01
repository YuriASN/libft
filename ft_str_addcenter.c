#include "libft.h"

/* Aplies ADD at N index of str without losing values.
	Returning a new allocated string */
char	*ft_str_addcenter(char *str, int n, char *add)
{
	int		full_size;
	int		i;
	char	*new;

	full_size = ft_strlen(str) + ft_strlen(add);
	new = ft_calloc(sizeof(char), full_size + 1);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < n)
		new[i] = str[i];
	while (add[i - n])
	{
		new[i] = add[i - n];
		++i;
	}
	while (str[n])
		new[i++] = str[n++];
	if (str)
		free(str);
	return (new);
}
