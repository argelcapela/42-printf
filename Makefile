all:
	@clear
	@sed -i '1 s/.*/ \#include \<stdio\.h> /' ./test/main.c
	@gcc ./test/main.c
	@./a.out | cat -e
	@rm a.out

# targets for test my inspiration code projects
i3:
	@sed -i '1 s/.*/ \#include \"\.\.\/inspiration\/3\_printf\_iralmeida\/ft_printf.h\" /' ./test/main.c
	@gcc ./test/main.c ./inspiration/3_printf_iralmeida/libftprintf.a
	@./a.out
	@rm a.out
i3c:
	@rm a.out ./inspiration/3_printf_iralmeida/*.o ./inspiration/3_printf_iralmeida/*.a 2>/dev/null || true
	@echo "Deleted Successfuly!"

# targets for my own printf
# mandatory
comp:
	make -C ./src

lcm:
	@sed -i '1 s/.*/ \#include \"\.\.\/src\/ft_printf.h\" /' ./test/main.c
	@gcc ./test/main.c ./src/libftprintf.a
	@./a.out | cat -e
	@rm a.out

c:
	@rm a.out ./src/*.o ./src/*.a
# bonus

# targets to test my 42-printf-entrega files
