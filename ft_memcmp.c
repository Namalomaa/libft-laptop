//include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;

	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i] )
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i ++;
	}
	return (0);
}

int main() {
    char arr1[] = {'a', 'b', 'c', 'd'};
    char arr2[] = {'a', 'b', 'e', 'f'};
    char arr3[] = {'a', 'b', 'c', 'd'};

    int result1 = ft_memcmp(arr1, arr2, 4); // Compare all 4 bytes
    int result2 = ft_memcmp(arr1, arr3, 4); // Compare all 4 bytes
    int result3 = ft_memcmp(arr1, arr2, 2); // Compare first 2 bytes

    if (result1 < 0) {
        printf("arr1 is less than arr2\n");
    } else if (result1 > 0) {
        printf("arr1 is greater than arr2\n");
    } else {
        printf("arr1 is equal to arr2\n");
    }

    if (result2 == 0) {
        printf("arr1 is equal to arr3\n");
    }

    if (result3 == 0) {
        printf("First 2 bytes of arr1 are equal to first 2 bytes of arr2\n");
    }

    return 0;
}
