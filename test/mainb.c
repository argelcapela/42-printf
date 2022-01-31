#include "../src/ft_printf.h"
#include <stdio.h>
#include <string.h>

int main(void)
{

	ft_printf("%+ .8d\n", 10);
	printf("% .8d\n", 10);

	return (0);
}
