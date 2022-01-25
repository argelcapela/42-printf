#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str;
	str = malloc(sizeof(char) * 10);
	strcpy(str, "printf");
	int d = 10;
	char c = 'P';
	unsigned int u = 100000;

	ft_printf("%%%%: %%\n");
	ft_printf("%%c: %c\n", c);
	ft_printf("%%s: %s\n", str);
	ft_printf("%%d: %s\n", d);
	ft_printf("%%i: %i\n", d);
	ft_printf("%%u: %i\n", u);
	ft_printf("%%x: %x\n", &str);
	return(0);
}
