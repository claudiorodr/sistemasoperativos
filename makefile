compile: *.c *.o
	@gcc -g -c *.c
	@gcc *.o -lpthread -g -o Monitor
exec:
	@./Monitor
