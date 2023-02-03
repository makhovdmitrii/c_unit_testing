program: main.o libmy.o
	gcc -o program main.o libmy.o

main.o: main.c libmy.h
	gcc -c main.c

libmy.o: libmy.c libmy.h
	gcc -c libmy.c

test_libmy.o: test_libmy.c libmy.h
	gcc -c test_libmy.c

test: test_libmy.o libmy.o
	gcc -o test test_libmy.o libmy.o
clean:
	rm -f *.o test program
