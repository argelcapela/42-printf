all:
	@$(MAKE) -C ./src
	@gcc  test/main.c src/libftprintf.a
#	@clear
	@./a.out

mb:
	@$(MAKE) -C ./src
	@gcc  test/mainb.c src/libftprintf.a
#	@clear
	@./a.out

l:
	@clear
	@valgrind --leak-check=full ./a.out

t:
	@$(MAKE) a -C ./test/tripoulle
tm:
	@$(MAKE) m -C ./test/tripoulle
tb:
	@$(MAKE) b -C ./test/tripoulle


c:
	@$(MAKE) fclean -C ./src
	@$(MAKE) fclean -C ./src/vendor/libft_plusplus
	rm *.out

n:
	@clear
	@norminette ./src/ft_prin*                \
               ./src/vendor/base/*        \
               ./src/vendor/translators/*   \
               ./src/vendor/libft_plusplus/*.c         \
               ./src/vendor/libft_plusplus/*.h

.PHONY: all, l, tm, tb, c, n
