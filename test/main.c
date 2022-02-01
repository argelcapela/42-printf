#include "../src/ft_printf.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
		ft_printf("%.2d\n", 2);

		ft_printf("% s", "");
		ft_printf(" % 1s", "");
		ft_printf("% 1s ", "");
		ft_printf(" % s ", "");
		ft_printf(" % s ", "-");
		ft_printf(" % s % s ", "", "-");
		ft_printf(" % s % s ", " - ", "");
		ft_printf(" % s % s % s % s ", " - ", "", "4", "");
		ft_printf(" % s % s % s % s % s ", " - ", "", "4", "", "2 ");

		ft_printf(" % d \n", 10);
		ft_printf(" % d \n", 11);
		ft_printf(" % d \n", 15);
		ft_printf(" % d \n", 16);
		ft_printf(" % d \n", 17);
		ft_printf(" % d \n", 99);
		ft_printf(" % d \n\n\n", 100);

		printf(" % d \n", 10);
		printf(" % d \n", 11);
		printf(" % d \n", 15);
		printf(" % d \n", 16);
		printf(" % d \n", 17);
		printf(" % d \n", 99);
		printf(" % d \n", 100);


// próprio printf
	// c
		ft_printf("\n\n(c):\n");
		ft_printf("Meu:\n");
		ft_printf("%c\n", '0' + 256);
		ft_printf("%%\n");
		ft_printf("%c %c %c", '0', 0, '0');


		ft_printf("Libc:\n");
		printf("%c\n", '0' + 256);
		printf(" %c %c %c \n\n\n", '0', 0, '1');

	// s
		ft_printf("\n\n(s):\n");
		ft_printf("Meu:\n");
		ft_printf(" NULL %s NULL ", NULL);

	// p
		ft_printf(" %p %p ", 0, 0);

	// %
		ft_printf(" %% ");

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
		ft_printf("%15p\n", &ptr);
		ft_printf(" % d \n", 0);
		ft_printf(" % d \n", -1);
		ft_printf(" % d \n", 1);
		ft_printf(" % d \n\n\n", 9);


		ft_printf("Libc:\n");
		printf("%5c\n", 'x');
		printf("%5s\n", "ar");
		printf("%5d\n", -10);
		printf("%5i\n", -10);
		printf("%5u\n", u);
		printf("%5x\n", -1000);
		printf("%15p\n", &ptr);
		printf(" % d \n", 0);
		printf(" % d \n", -1);
		printf(" % d \n", 1);
		printf(" % d \n\n\n", 9);

	// (flag hash in x and X)
		ft_printf("\n\n(flag hash in x and X):\n");
		ft_printf("Meu:\n");
		ft_printf("%#7x\n", 1000);
		ft_printf("%#7X\n", 1000);
		ft_printf(" %#x\n\n", 0);



		ft_printf("Libc:\n");
		printf("%#7x\n", 1000);
		printf("%#7X\n", 1000);
		printf(" %#x\n\n", 0);

		//(flag 0 in d,i,u,xX)
		ft_printf("\n\n(flag 0 in d,i,u,xX):\n");
		ft_printf("Meu:\n");
		ft_printf("%05d\n", 10);
		ft_printf("%05i\n", 10);
		ft_printf("%05u\n", u);
		ft_printf("%05x\n\n", 1000);
		ft_printf(" %04d\n", -14);
		ft_printf(" %05d\n", -15);
		ft_printf(" %06d \n\n", -16);

		ft_printf("Libc:\n");
		printf("%05d\n", 10);
		printf("%05i\n", 10);
		printf("%05u\n", u);
		printf("%05x\n", 1000);

		printf(" %04d \n", -14);
		printf(" %05d \n", -15);
		printf(" %06d \n", -16);


	// (flag + in d,i -> always show the signal)
		ft_printf("\n\n(flag + in d,i -> always show the signal):\n");
		ft_printf("Meu:\n");

		ft_printf("%-+5d\n", 10);
		ft_printf("%-+5d\n", 10);
		ft_printf("%+i\n\n\n", 10);
		ft_printf("%+d\n\n", 0);
		printf("%+d\n\n", 0);
		printf("Libc:\n");
		printf("%+5i\n", 10);
		printf("%-+5d\n", 10);
		printf("%-+5d\n", 10);
		printf("%+i\n\n\n", 10);

	// string precision
		ft_printf("\n\nstring precision:\n");
		ft_printf("Meu:\n");
		ft_printf("%.30s\n", "argel capela");

		ft_printf(" %.2s %.3s %.4s %.5s %.1s \n", " - ", "", "4", "", "2 ");
		ft_printf(" %.1d \n", 0);
		ft_printf(" %.2d \n", -1);
		ft_printf(" %.2d \n\n", 1);

		ft_printf("\nLibc:\n");
		printf("%.30s", "argel capela\n\n");

		printf("\n\n");
		printf(" %.2s %.3s %.4s %.5s %.1s \n", " - ", "", "4", "", "2 ");
		printf(" %.1d \n", 0);
		printf(" %.2d \n", -1);
		printf(" %.2d \n\n", 1);


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

		printf("\n\n\n\n");
		ft_printf("%+5d\n", 10);
		printf("%+5d\n", 10);

	return(0);
}
