CFLAGS = -Wall -g

all:ex8 ex14 ex16 ex17 ex18

ex8:ex8.c
	cc ex8.c -o ex8

ex14:ex14.c
	cc ex14.c -o ex14

ex16:ex16.c
	cc ex16.c -o ex16

ex17:ex17.c
	cc ex17.c -o ex17

ex18:ex18.c
	cc ex18.c -o ex18

clear:
	rm -f ex8 ex14 ex16 ex17 ex18
