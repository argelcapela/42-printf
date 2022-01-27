#include "libft.h"
#include <stdio.h>

int main(void)
{
	unsigned int n = -10;
	size_t convert = n;
	char *resposta = ft_uitoa_base(convert, "0123456789abcdef");
	free(resposta);
	return (0);
}
