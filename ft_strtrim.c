/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:46:26 by namaloma          #+#    #+#             */
/*   Updated: 2025/12/03 14:56:01 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && inset(s1[start] , set))
		start ++;
	end = ft_strlen(s1);
	if (end != 0)
		end --;
	while (end > start && inset (s1[end], set))
		end --;
	if (start > end)
		return (ft_strdup(""));
	trimmed = (char *)malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}

#include <stdio.h>

int main(void)
{
    char *result;

    // 1️⃣ Normal case: trim from both ends
    result = ft_strtrim("  hello  ", " ");
    printf("'%s'\n", result); // Expected: 'hello'
    free(result);

    // 2️⃣ Trim multiple characters
    result = ft_strtrim("---hello---", "-");
    printf("'%s'\n", result); // Expected: 'hello'
    free(result);

    // 3️⃣ Trim a set of characters
    result = ft_strtrim("xyxhelloxyx", "xy");
    printf("'%s'\n", result); // Expected: 'hello'
    free(result);

    // 4️⃣ No trimming needed
    result = ft_strtrim("hello", " ");
    printf("'%s'\n", result); // Expected: 'hello'
    free(result);

    // 5️⃣ Fully trimmed string
    result = ft_strtrim("xxxxxx", "x");
    printf("'%s'\n", result); // Expected: '' (empty string)
    free(result);

    // 6️⃣ Empty string input
    result = ft_strtrim("", " ");
    printf("'%s'\n", result); // Expected: '' (empty string)
    free(result);

    // 7️⃣ Empty set
    result = ft_strtrim(" hello ", "");
    printf("'%s'\n", result); // Expected: ' hello ' (unchanged)
    free(result);

    // 8️⃣ NULL input for s1
    result = ft_strtrim(NULL, " ");
    printf("%p\n", result); // Expected: 0x0 (NULL)

    // 9️⃣ NULL input for set
    result = ft_strtrim("hello", NULL);
    printf("%p\n", result); // Expected: 0x0 (NULL)

    // 🔟 Trimming special characters
    result = ft_strtrim("\t\nhello\n\t", "\n\t");
    printf("'%s'\n", result); // Expected: 'hello'
    free(result);

    return 0;
}
