#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char c = '1';
	//int teste = 129;
	char str[100] = "";
	char str2[] = "";
	//void* dst = str + 5;

	//printf("ft_isascii %d\n", ft_isascii(teste));
	//printf("%d\n", ft_isdigit(c));
	//printf("%s\n", ft_memset((void *) str, 'a', 10));
	//printf("%s\n", ft_memcpy((void *) dst, (void*) str, 10));
	printf("%s\n", str);
	printf("%d\n",ft_strncmp(str, str2, 11));
	//printf("%s\n",(char *) ft_memmove(dst, (void*) str, 10));
	//printf("%s\n", str);
	return (0);
}

