#include "../src/ft_printf.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
  ft_printf("%-9d", 6);
	return (0);
}


/*

#
# precision (d,i,s)
#

 - só se preocupa com add 0
-d,i,u -> Indica quantos algarismos o número a ser printade deve
possuir.

se o valor a ser printado, tiver menos algarismos, que o que for
definido no precision, é adiciona zeros a esquerda, até atingir,
esse valor do precision.

se o valor a ser printado, tiver mais algarismos, o precision não faz
nada

O precision vem primeiro pq dependendo do valor que ele tiver
o width tem um comportamento diferente, ou ele add zeros,
ou espaços.

sinal + ou menos, não afeta o precision.

-s -> limita

#
# width
# (todos-> se nenhuma flag está ativa ou flag space -> add space)

# (d,i) -> add espace (se tem precision)
# (d,i) -> add zero (se flag zero ative e sem precision)
#

-d,i -> se tiver precision add (space) || se tiver precision e flag zero ativa
 - se n tem sinal visível -> qtd spaces = width - strlen
 - se tem sinal visível -> qtd spaces = (width - (strlen) - 1)
   da o merge do espaço, flag - afeta o ordem do merge aqui.
   add sinal no final, se flag + ativa, esse sinal é o +;


-d,i -> se tiver não tiver precision e flag zero está desativada   ->
 - se n tem sinal visível -> qtd zero = width - strlen
 - se tem sinal visível -> qtd zeros = (width - (strlen) - 1)
   da o merge do width,flag - afeta o ordem do merge aqui.
   add sinal no final, se flag + ativa, esse sinal é o +;

-d,i -> se tiver não tiver precision e flag zero está ativa   ->
 - se n tem sinal visível -> qtd zero = width - strlen
 - se tem sinal visível -> qtd zeros = (width - (strlen) - 1)
   da o merge do width,
   add sinal no final, se flag + ativa, esse sinal é o +;


width > 0
- u,s,c,p,% + flag space =  space = width -= strlen

#
# flag
#

- (space) se width == 0 e não tem sinal visível -> 1 espaço
  caso contrário, não faz nada

- # sozinha -> x,X -> 0x antes

#
# signals
#
- + e - -> space -> sempre vem coladinho no número
- + e - -> 0	  -> sempre aparece coladinho no primeiro
zero

*/
