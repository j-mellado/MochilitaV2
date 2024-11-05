
#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

	char	*ptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	ptr = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
