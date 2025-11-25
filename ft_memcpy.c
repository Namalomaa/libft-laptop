#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}
