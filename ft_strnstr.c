#include <stdio.h>//remove
//#include "libft.h" un comment

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	pos;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	pos = 0;
	while (haystack[pos] && (pos < len))
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] &&  (size_t)(pos + i) < len && haystack[pos + i]
				&& haystack[pos + i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack + pos);
		}
		pos ++;
	}
	return (NULL);
}
