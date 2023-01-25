all:	main

main:	main.o
		gcc *.o -lm -o main

main.o:
		gcc -g -lm -O -c *.c

clean:
		rm *.o
		rm main