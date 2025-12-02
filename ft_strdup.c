#include <stdlib.h>
#include "libft.h"

char	*strdup(const char *s)
{
	char	*ds;
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len])
	{
		len ++;
	}
	ds = (char *)malloc(sizeof (char) * (len + 1));
	if (!ds)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ds[i] = s[i];
		i++;
	}
	ds [i] = '\0';
	return (ds);
}
