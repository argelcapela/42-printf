 #include <stdio.h> 

int main(void)
{
	int i;
	char str[] = "argel capela";

	/**------------------------ specifiers---------------------------------
	 * Especifica qual o tipo de dado será passado como argumento do printf
	 ***/

	printf("/**------------------------ specifiers--------------------------------- **/\n");
	printf("%%%%: %%\n"); // %

	// c (character)
	char c = 'a';
	printf("%%c: %c\n", c);

	// s (string)
	char *s = "argel capela";
	printf("%%s: %s\n", s);

	// p (pointer)
	void *p = NULL;
	printf("%%p: %p\n", &p);

	//------------------------------------------------

	// i (integer)
	i = 012;
	printf("\n%%i: %i\n", i);

	// d (decimal)
	int d = 012;
	printf("%%d: %d\n\n", 012);

	/*-------------------------------------------------
	 * In printf, outputing data, i and d behaves
	 * similar.
	 *
	 * In scanf, inputing data, d just accepts  a number
	 * in base 10, if not, the input will receive garbage
	 * value.
	 *
	 * and i receive value from octal, hexadecimal or
	 * decimal base.
	/*------------------------------------------------*/

	// u (unsigned integer)
	unsigned int u = 100000;
	printf("%%u: %u\n", u);

	// x (hexadecimal lowercase)
	int x = 10;
	printf("%%x: %x\n", x);

	// X (hexadecimal uppercase)
	x = 10;
	printf("%%X: %X\n", x);

	printf("\n\n");


	/**------------------------flags---------------------------------
	 * Criam prefixos para os valores passados como argumento.
	 * **/

	/**------------------------width---------------------------------
	 * Indica quantas vezes as flags ou prefixos (0) se repetem.
	 * **/


	printf("/**------------------------ flags and width--------------------------------- **/\n");


	//** for Integers
		// + or - (print a + sign before the number whatever it is positive or negative)
		i = 10;
		printf("\n+: %-i", i);

		// (space)
		i = 10;
		printf("\n(space): % i\n", i);

		/*
		 * 0  - adiciona zeros antes do número
		 *	  - só funciona com um width especificado
		 *	  - a quantidade de zeros é equivalente a diferença entre o [width] * 	especificado e a quantidade de algarismos que número passado
		 *	 como argumento possui.
		 */
		i = 10;
		printf("\n0: %07i\n", i);

		i = 10;
		printf("\n0*: %0*i\n", 10, i);

	//** for hexadecimal
		// #
		i = 10;
		printf("\n#: %#X\n", i);


	printf("\n\n");

	/**------------------------precision---------------------------------
	 * 'Define a quantidade de caracteres a ser printada ou o mínimo de caracteres digitados.
	 *
	 * Para d,i,u,x e X -> Define qual o mínimo de algarismos que o valor do argumento possui, caso o mesmo seja menor que o precision passado, o printf printa o valor com zeros a esquerda. Esses zeros são a diferença entre o precision e o valor do argumento.
	 *
	 * Para c -> não faz nada
	 *
	 * Para s -> define a quantidade de bytes que será printada do argumento passado.
	 * **/
	printf("/**------------------------ precision--------------------------------- **/\n");


	//** for d, i, u, x, X (is equal to 0(number) -> Especifica o mínimo número de algarismos a ser digitado, se o argumento for menor que esse valor, é feito a diferença e é adiciona zeros a esquerda)
		i = 10;
		printf("\n%%.(number)i: %.5i \n", i);
		printf("%%.*i: %.*i \n", 5, i);
		i = 1234567;
		printf("%%.(number)i: %.5i \n", i);

	//** for s (Quantidade de bytes a ser printado, semelhante ao terceiro argumento do write(1, "argel capela", 5))
		printf("%%.5s: %.5s \n", str);
		printf("%%.*s: %.*s \n", 5, str);






	printf("\n\n");

}
