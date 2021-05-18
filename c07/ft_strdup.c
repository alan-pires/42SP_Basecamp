#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(ft_length(src) + 1);
	if (dest == NULL)
		return NULL;
	ft_strcpy(dest, src);	
	return (dest);
}
