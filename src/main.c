#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* printando todos os 9
	char *str;
	str = malloc(sizeof(char) * 10);
	strcpy(str, "printf");
	int d = 10;
	char c = 'P';
	unsigned int u = 100000;

	ft_printf("%%\n");
	ft_printf("%c\n", 'A');
	ft_printf("%s\n", "teste");
	ft_printf("%p\n", &str);
	ft_printf("%i\n", 100);
	ft_printf("%d\n", 100);
	ft_printf("%u\n", u);
	ft_printf("%x\n", 100000);
	ft_printf("%X\n", 100000);
	*/

	/*
	ft_printf("%c", 0);
	char *empty_str = strdup("\0");
	char *null_str = NULL;
	printf("%p\n", &empty_str);
	ft_printf("%p\n", null_str);*/

	// # flag
		//printf("%%\n");
		//printf("%#*c\n", 5, 'x');
		//printf("%#*s\n", 5, "Hello");
		//printf("%#*d\n", 5, 10);
		//printf("%#*i\n", 5, 10);
		//unsigned int u = 10000;
		//printf("%#*u\n", 5, u);
		//printf("%#x\n", 1000);
		//void *ptr;
		//printf("%#*p\n", 5, &ptr);


	// - flag (left-adjustment)
		//printf("%%\n");
		//printf("%#*c\n", 5, 'x');
		//printf("%#*s\n", 5, "Hello");
		//printf("%-d\n", 10);
		//printf("%-i\n", 10);
		//unsigned int u = 10000;
		//printf("%#*u\n", 5, u);
		//printf("%+x\n", 1000);
		//void *ptr;
		//printf("%+p\n", &ptr);
		/*int x = 345;
		const char * y = "monkeys";

		// Demonstrate with numbers.
		//printf ("<%d> is not justified.\n", x);
		//printf ("<%10d> is right-justified.\n", x);
		//printf ("<%-10d> The minus sign makes it left-justified.\n", x);
		// Demonstrate with strings.
		//printf ("'%s' is not justified.\n", y);
		//printf ("'%10s' is right-justified.\n", y);
		//printf ("'%-10s' is left-justified using a minus sign.\n", y);

		//printf("%%\n");
		printf("%-*c\n", 20, 'x');
		printf("%-*s\n", 30, "Hello");
		printf("%-*d\n", 10, 10);
		printf("%-*i\n", 10, 10);
		unsigned int u = 10000;
		printf("%-*u\n", 30, u);
		printf("%-*x\n", 30, 1000);
		void *ptr;
		printf("%-*p\n", 30, &ptr);*/


	// + flag (asure that always will have
	//sign before the signed numbers)
		//printf("%%\n");
		//printf("%#*c\n", 5, 'x');
		//printf("%#*s\n", 5, "Hello");
		// **printf("%-d\n", 10);
		// **printf("%-i\n", 10);
		//unsigned int u = 10000;
		//printf("%#*u\n", 5, u);
		//printf("%+x\n", 1000);
		//void *ptr;
		//printf("%+p\n", &ptr);

	// space flag

		/*printf("%%\n");
		printf("%*c\n", 20, 'x');
		printf("%*s\n", 30, "Hello");
		printf("%*d\n", 10, 10);
		printf("%*i\n", 10, 10);
		unsigned int u = 10000;
		printf("%*u\n", 30, u);
		printf("%*x\n", 30, 1000);
		void *ptr;
		printf("%*p\n", 30, &ptr);*/

	// 0 flag

		//printf("%0*%\n", 5);
		//printf("%0*c\n", 20, 'x');
		//printf("%0*s\n", 30, "Hello");
		//printf("%0*d\n", 10, 10);
		//printf("%0*i\n", 10, 10);
		//unsigned int u = 10000;
		//printf("%0*u\n", 10, u);
		//printf("%0*x\n", 10, 1000);
		//void *ptr;
		//printf("%0*p\n", 30, &ptr);

	// field width

		//printf("%%\n");
		/*printf("%10c\n", 'x');
		printf("%10s\n", "Hello");
		printf("%10d\n", 10);
		printf("%10i\n", 10);
		unsigned int u = 10000;
		printf("%10u\n", u);
		printf("%10x\n", 1000);
		void *ptr;
		printf("%10p\n", &ptr);*/

	// precision
		/*
		printf("%.3s\n", "Hello");
		printf("%.5d\n", 10);
		printf("%.5i\n", 10);
		unsigned int u = 10000;
		printf("%.5u\n", u);
		printf("%.5x\n", 1000);
		printf("%.1f\n", 5.400);*/

		//printf("%.5c\n", 'x');
		//void *ptr;
		//printf("%.5p\n", &ptr);

		//printf("%%\n");

	//ft_printf("%%c: %c\n", 'A');


	// próprio printf

	// field width
		ft_printf("%5c\n", 'x');
		/*printf("%10s\n", "Hello");
		printf("%10d\n", 10);
		printf("%10i\n", 10);
		unsigned int u = 10000;
		printf("%10u\n", u);
		printf("%10x\n", 1000);
		void *ptr;
		printf("%10p\n", &ptr);*/


	return(0);
}
