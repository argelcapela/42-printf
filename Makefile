all:
	@$(MAKE) -C ./src
	@gcc  test/main.c src/libftprintf.a
#	@clear
	@./a.out

l:
	@clear
	@valgrind --leak-check=full ./a.out

tm:
	@$(MAKE) m -C ./src/tripoulle
tb:
	@$(MAKE) b -C ./src/tripoulle


c:
	@$(MAKE) fclean -C ./src
	@$(MAKE) fclean -C ./src/vendor/libs
	rm *.out
