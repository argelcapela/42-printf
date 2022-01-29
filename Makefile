all:
	@$(MAKE) -C ./src
	@gcc  test/main.c src/libftprintf.a
	@clear
	@./a.out

l:
	@clear
	@valgrind --leak-check=full ./a.out

t:
	@$(MAKE) a -C ./src/tripoulle
tm:
	@$(MAKE) m -C ./src/tripoulle
tb:
	@$(MAKE) b -C ./src/tripoulle


c:
	@$(MAKE) fclean -C ./src
	@$(MAKE) fclean -C ./src/vendor/libs
	rm *.out

n:
	@clear
	@norminette ./src/ft_prin*                \
               ./src/vendor/utils/*        \
               ./src/vendor/specifiers/*   \
               ./src/vendor/libs/*.c         \
               ./src/vendor/libs/*.h

.PHONY: all, l, tm, tb, c, n
