#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_size;
	size_t	big_size;

	if (big == NULL)
		return (NULL);
	i = 0;
	little_size = ft_strlen(little);
	big_size = ft_strlen(big);
	if (little_size == 0)
		return ((char *)big);
	while (i + little_size <= len && i + little_size <= big_size)
	{
		if (ft_strncmp(big + i, little, little_size) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
