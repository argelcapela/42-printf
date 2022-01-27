all:
	@make -C ./src
	@clear
	@clang -Wall -Wextra -Werror ./test/main.c ./src/libftprintf.a ./src/vendor/libs/libft.a
	@clear
	@./a.out

leak: all
	valgrind --leak-check=full  ./a.out

call:
	@make fclean -C src
	@make fclean -C src/vendor/libs
	@rm -f *.out
	@clear
