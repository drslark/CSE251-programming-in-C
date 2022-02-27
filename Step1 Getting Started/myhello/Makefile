myhello: myhello.o
	gcc -o myhello myhello.o
myhello.i: myhello.c
	gcc -E myhello.c > myhello.i
myhello.s: myhello.i
	gcc -Wall -S myhello.i
myhello.o: myhello.s
	gcc -c myhello.s
clean:
	rm myhello.i myhello.s myhello.o myhello
