#include "libft.h"

/* Return copy of ARRAY with PTR added to it.
	ARRAY is already freed inside. */
char	**ft_add_pointer_to_array(void **array, void *ptr, int ptr_size)
{
	int		i;
	void	**new_array;

	i = 0;
	while (array[i])
		i++;
	new_array = malloc(sizeof(void *) * (i + 2));
	i = 0;
	while (array[i])
	{
		new_array[i] = array[i];
		i++;
	}
	new_array[i] = ft_memcpy(new_array[i], ptr, ptr_size);
	new_array[i + 1] = NULL;
	free(array);
	return (new_array);
}

/* Remove the array of index i and jump every next 1 behind. */
void	clear_one_pointer(void **array, int i)
{
	free(array[i]);
	array[i] = array[i + 1];
	while (array[++i])
		array[i] = array[i + 1];
}

/* Free array of pointers */
void	free_double_pointer(void **ptr_ptr)
{
	int	i;

	i = -1;
	if (!ptr_ptr)
		return ;
	while (ptr_ptr[++i])
		free(ptr_ptr[i]);
	free(ptr_ptr);
}
