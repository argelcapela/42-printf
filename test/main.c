#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int main(void)
{

// próprio printf

	// (width + flag space and -)
		ft_printf("\n\n(width + flag space and -):\n");
		ft_printf("Meu:\n");
		ft_printf("%5c\n", 'x');
		ft_printf("%5s\n", "ar");
		ft_printf("%5d\n", -10);
		ft_printf("%5i\n", -10);
		unsigned int u = 100000;
		ft_printf("%5u\n", u);
		ft_printf("%5x\n", -1000);
		void *ptr;
		ft_printf("%15p\n\n", &ptr);

		ft_printf("Libc:\n");
		printf("%5c\n", 'x');
		printf("%5s\n", "ar");
		printf("%5d\n", -10);
		printf("%5i\n", -10);
		printf("%5u\n", u);
		printf("%5x\n", -1000);
		printf("%15p\n\n", &ptr);

	// (flag hash in x and X)
		ft_printf("\n\n(flag hash in x and X):\n");
		ft_printf("Meu:\n");
		ft_printf("%#7x\n", 1000);
		ft_printf("%#7X\n\n", 1000);

		ft_printf("Libc:\n");
		printf("%#7x\n", 1000);
		printf("%#7X\n\n\n", 1000);

	// (flag 0 in d,i,u,xX)
		ft_printf("\n\n(flag 0 in d,i,u,xX):\n");
		ft_printf("Meu:\n");
		ft_printf("%05d\n", 10);
		ft_printf("%05i\n", 10);
		ft_printf("%05u\n", u);
		ft_printf("%05x\n\n", 1000);

		ft_printf("Libc:\n");
		printf("%05d\n", 10);
		printf("%05i\n", 10);
		printf("%05u\n", u);
		printf("%05x\n", 1000);

	// (flag + in d,i -> always show the signal)
		ft_printf("\n\n(flag + in d,i -> always show the signal):\n");
		ft_printf("Meu:\n");
		ft_printf("%+5i\n", 10);
		ft_printf("%-+5d\n", 10);
		ft_printf("%-+5d\n", 10);
		ft_printf("%+i\n\n\n", 10);

		printf("Libc:\n");
		printf("%+5i\n", 10);
		printf("%-+5d\n", 10);
		printf("%-+5d\n", 10);
		printf("%+i\n\n\n", 10);

	// string precision
		ft_printf("\n\nstring precision:\n");
		ft_printf("Meu:\n");
		ft_printf("%.30s\n", "argel capela");

		ft_printf("\nLibc:\n");
		printf("%.30s", "argel capela\n\n");

	//  precision in d,i,u,xX
		ft_printf("\n\nprecision in d,i,u,xX:\n");
		ft_printf("Meu:\n");
		ft_printf("%.5d\n", -10);
		ft_printf("%.5i\n", -10);
		ft_printf("%.5u\n", -10);
		ft_printf("%.5x\n", -10);
		ft_printf("%.5x\n", -10);

		ft_printf("\nLibc:\n");
		printf("%.5d\n", -10);
		printf("%.5i\n", -10);
		printf("%.5u\n", -10);
		printf("%.5x\n", -10);
		printf("%.5x\n\n\n", -10);


	return(0);
}
