#include <stdio.h>
#include "libft.h"

int main()
{
	char	*str = ft_strtrim(NULL, "tt");
	printf("%s\n", str);
	free(str);
}
